#include "BankAccount.h"

#include <iostream>

std::ostream& operator<< (std::ostream& os, const BankAccount& s)
{
    for (const auto transaction : s.TransactionHistory)
    {
        std::cout << "Test" << std::endl;
    }
    
    std::cout << "Current balance: " << s.CurrentBalance << std::endl;

    return os;
}

/*Transaction BankAccount::operator+(const Transaction& transactionToAdd) const
{
    return transactionToAdd;
}

Transaction BankAccount::operator-(const Transaction& transactionToAdd) const
{
    return transactionToAdd;
}*/