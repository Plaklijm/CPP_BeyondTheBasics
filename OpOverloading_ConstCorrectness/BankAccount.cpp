#include "BankAccount.h"

#include <iostream>

BankAccount::BankAccount(float balance, Transaction transaction)
{
    this->CurrentBalance = balance;
    this->TransactionHistory.push_back(transaction);
}

std::ostream& operator<< (std::ostream& os, const BankAccount& s)
{
    for (const auto transaction : s.TransactionHistory)
    {
        std::cout << "eur:" << transaction.amount << " | date: " << transaction.GetCurrentDate() << std::endl; 
    }
    
    std::cout << "Current balance: " << s.CurrentBalance << std::endl;

    return os;
}

BankAccount BankAccount::operator+=(const Transaction& transactionToAdd)
{
    return BankAccount(CurrentBalance += transactionToAdd.amount, transactionToAdd);
}

BankAccount BankAccount::operator-=(const Transaction& transactionToAdd)
{
    return BankAccount(CurrentBalance -= transactionToAdd.amount, transactionToAdd);
}

float BankAccount::GetCurrentBalance() const
{
    return CurrentBalance;
}

std::vector<Transaction> BankAccount::GetTransactionHistory() const
{
    return TransactionHistory;
}
