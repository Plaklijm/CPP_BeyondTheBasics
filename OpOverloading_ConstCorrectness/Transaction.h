#pragma once
#include <chrono>
#include <string>

class Transaction
{
public:
    Transaction(float amount);

    float GetTransactionAmount() const;
    
    std::chrono::year_month_day GetTransactionDate() const;
private:
    float amount;
    std::chrono::year_month_day dateTime;

private:
    std::chrono::year_month_day GetCurrentDate() const;
};
