#include <iostream>

#include "BankAccount.h"

BankAccount::BankAccount(double balance)
    :
    balance(balance) {}

void BankAccount::draw(double value)
{
    if (value > balance)
        throw InsufficientFundsException("Insufficient Funds!");

    balance -= value;

    cout << "Drawed funds from account: " << value << ". Current balance: " << balance << endl;
}
