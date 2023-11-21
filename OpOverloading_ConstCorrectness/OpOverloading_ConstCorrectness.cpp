#include <iostream>

#include "BankAccount.h"

int main(int argc, char* argv[])
{
    // Create bankaccount
    BankAccount account = BankAccount();

    // Create new transactions and add then to the bank account
    for (int i = 0; i < 15; i++)
    {
        auto transaction = new Transaction(rand() % 350);

        if (rand() % 10 > 2)
        {
            account += *transaction;
        }
        else
        {
            account -= *transaction;
        }
    }
    
    std::cout << account << std::endl;
    
    return 0;
}
