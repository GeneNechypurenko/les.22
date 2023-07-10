#include "InsufficientFundsException.h"

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double balance);

    void draw(double value);
};