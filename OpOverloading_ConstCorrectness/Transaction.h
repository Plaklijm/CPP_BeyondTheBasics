#pragma once
#include <chrono>
#include <string>

class Transaction
{
    // (bij/afschrijving, hoeveelheid, datum)
public:
    Transaction(float amount);
    std::string get_current_time_and_date();

    float amount;
    time_t dateTime;
};
