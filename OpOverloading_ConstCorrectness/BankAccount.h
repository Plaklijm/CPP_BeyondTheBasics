#pragma once
#include <vector>

#include "Transaction.h"

class Transaction;

class BankAccount
{
public:
    BankAccount(float balance = 0, std::string date = "", float amount = 0);
    

    friend std::ostream& operator<< (std::ostream& os, const BankAccount& s);

    BankAccount operator+= (const Transaction& transactionToAdd);
    BankAccount operator-= (const Transaction& transactionToAdd);

    float GetCurrentBalance() const;
private:
    float CurrentBalance;
    int transactionAmount;
    std::vector<char> TransactionTypeHistory;
    std::vector<std::string> TransactionDateHistory;
    std::vector<float> TransactionAmountHistory;
};
