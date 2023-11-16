#pragma once
#include <ostream>
#include <vector>

#include "Transaction.h"

class Transaction;

class BankAccount
{
public:
    friend std::ostream& operator<< (std::ostream& os, const BankAccount& s);

    float CurrentBalance;

    BankAccount operator+ (const Transaction& transactionToAdd) const;
    BankAccount operator- (const Transaction& transactionToAdd) const;
private:
    std::vector<Transaction> TransactionHistory;
};
