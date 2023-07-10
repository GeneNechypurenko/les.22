#pragma once
#include <iostream>
#include <exception>
#include <string>

using namespace std;

class InsufficientFundsException : public std::exception
{
private:
    const char* error;

public:
    InsufficientFundsException(const char* error);

    virtual const char* what() const noexcept;
};