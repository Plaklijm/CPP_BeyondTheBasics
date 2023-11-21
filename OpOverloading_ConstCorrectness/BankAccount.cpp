#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount(float balance, std::string date, float amount)
{
    this->CurrentBalance = balance;
}

std::ostream& operator<< (std::ostream& os, const BankAccount& s)
{
    // ostream function to log every transaction that happened
    for (int i = 0; i < s.transactionAmount; i++)
    {
        std::cout << "eur:" << s.TransactionTypeHistory[i] << s.TransactionAmountHistory[i]
            << " | datetime: " << s.TransactionDateHistory[i] << std::endl; 
    }
    
    std::cout << "Current balance: " << s.CurrentBalance << std::endl;

    return os;
}

BankAccount BankAccount::operator+=(const Transaction& transactionToAdd)
{
    // Add transaction
    transactionAmount++;
    TransactionDateHistory.push_back(transactionToAdd.GetTransactionDate());
    TransactionAmountHistory.push_back(transactionToAdd.GetTransactionAmount());
    TransactionTypeHistory.push_back('+');
    return BankAccount(CurrentBalance += transactionToAdd.GetTransactionAmount());
}

BankAccount BankAccount::operator-=(const Transaction& transactionToAdd)
{
    // Add a negative transaction
    transactionAmount++;
    TransactionDateHistory.push_back(transactionToAdd.GetTransactionDate());
    TransactionAmountHistory.push_back(transactionToAdd.GetTransactionAmount());
    TransactionTypeHistory.push_back('-');
    return BankAccount(CurrentBalance -= transactionToAdd.GetTransactionAmount());
}

float BankAccount::GetCurrentBalance() const
{
    return CurrentBalance;
}
