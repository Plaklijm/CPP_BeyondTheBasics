#include "Transaction.h"

#include <iomanip>
#include <iostream>
#include <sstream>
#include <chrono>
#include <format>

Transaction::Transaction(float amount)
{
    this->amount = amount;
    this->dateTime = GetCurrentDate();
}

float Transaction::GetTransactionAmount() const
{
    return amount;
}

std::chrono::year_month_day Transaction::GetTransactionDate() const
{
    return dateTime;
}

std::chrono::year_month_day Transaction::GetCurrentDate() const
{
    // Gets the current time with the Chrono libraru; Only returns the date, so not the time
    const std::chrono::time_point now{std::chrono::system_clock::now()};
    
    const std::chrono::year_month_day ymd{std::chrono::floor<std::chrono::days>(now)};

    // TODO: also implement the time that the transaction occured
    return ymd;
}
