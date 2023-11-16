#include <iostream>
#include <ctime>

#include "BankAccount.h"

int main(int argc, char* argv[])
{
    /*
    Modelleer een bankrekening, met een transactie-log

    class Bankrekening (saldo, transactie-historie)
    class Transactie (bij/afschrijving, hoeveelheid, datum)
    Definieër + / - operators om bij/afschrijvingen te verwerken

    Definieër outputstream insertion operator(s), zodat deze code:

        std::cout << bankrekening << std::endl; 

    het saldo, en de historie van de volledige transacties geeft (dus niet alleen de eindresultaten!)
    */

    BankAccount account = BankAccount();
    Transaction transaction = (100);
    account += transaction;

    std::cout << account << std::endl;
    
    return 0;
}
