#pragma once
#include <ostream>
#include <vector>

#include "Transaction.h"

class Transaction;

class BankAccount
{
public:
    BankAccount(float balance = 0, Transaction transaction = NULL);
    
    friend std::ostream& operator<< (std::ostream& os, const BankAccount& s);


    BankAccount operator+= (const Transaction& transactionToAdd);
    BankAccount operator-= (const Transaction& transactionToAdd);

    float GetCurrentBalance() const;
    std::vector<Transaction> GetTransactionHistory() const;
private:
    float CurrentBalance;
    std::vector<Transaction> TransactionHistory;
};
