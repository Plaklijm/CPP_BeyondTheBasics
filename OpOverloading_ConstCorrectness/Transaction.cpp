#include "Transaction.h"

#include <iomanip>
#include <iostream>
#include <sstream>
#include <chrono>
#include <format>

Transaction::Transaction(float amount)
{
    this->amount = amount;  
    std::cout << get_current_time_and_date() << std::endl;
}

std::string Transaction::get_current_time_and_date()
{
    auto const time = std::chrono::current_zone()
        ->to_local(std::chrono::system_clock::now());
    return  std::format("{:%Y-%m-%d %X}", time);
}
