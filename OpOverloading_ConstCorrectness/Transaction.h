#pragma once
#include <chrono>
#include <string>

class Transaction
{
public:
    Transaction(float amount);

    float GetTransactionAmount() const;

    std::string GetTransactionDate() const;
private:
    float amount;

    std::string dateTime;

private:
    std::string GetCurrentDate() const;
};
