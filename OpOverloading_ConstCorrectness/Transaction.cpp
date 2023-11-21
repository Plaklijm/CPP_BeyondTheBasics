#include "Transaction.h"

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

std::string Transaction::GetTransactionDate() const
{
    return dateTime;
}

std::string Transaction::GetCurrentDate() const
{
    // Gets the current datetime with the Chrono libraru
    const std::chrono::time_point now{std::chrono::floor<std::chrono::seconds>(std::chrono::system_clock::now())};
    
    // Format it into a string object so it can be returned and printed easily 
    std::string s = std::format("{:%Y-%m-%d UTC:%H:%M:%S}", now);
    
    return s;
}
