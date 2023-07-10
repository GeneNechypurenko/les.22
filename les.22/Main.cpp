#include <iostream>
#include <exception>
#include <string>

#include "BankAccount.h"
#include "InsufficientFundsException.h"

using namespace std;

int main()
{
    BankAccount acc(100);

    try
    {
        acc.draw(1000);
    }
    catch (const InsufficientFundsException& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}
