#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount(float balance, std::string date, float amount)
{
    this->CurrentBalance = balance;
    this->TransactionHistory.push_back(&transaction);
}

std::ostream& operator<< (std::ostream& os, const BankAccount& s)
{
    for (int i = 0; i < transactionCount; i++)
    {
        std::cout << "eur:" << transaction->GetTransactionAmount() << " | datetime: " << transaction->GetTransactionDate() << std::endl; 
    }
    
    std::cout << "Current balance: " << s.CurrentBalance << std::endl;

    return os;
}

BankAccount BankAccount::operator+=(const Transaction& transactionToAdd)
{
    transactionCount++;
    TransactionDateHistory.push_back(transactionToAdd.GetTransactionDate());
    TransactionAmountHistory.push_back(transactionToAdd.GetTransactionAmount());
    
    return BankAccount(CurrentBalance += transactionToAdd.GetTransactionAmount());
}

BankAccount BankAccount::operator-=(const Transaction& transactionToAdd)
{
    transactionCount++;
    TransactionDateHistory.push_back(transactionToAdd.GetTransactionDate());
    TransactionAmountHistory.push_back(transactionToAdd.GetTransactionAmount());
    
    return BankAccount(CurrentBalance -= transactionToAdd.GetTransactionAmount());
}

float BankAccount::GetCurrentBalance() const
{
    return CurrentBalance;
}

std::vector<Transaction*> BankAccount::GetTransactionHistory() const
{
    return TransactionHistory;
}
