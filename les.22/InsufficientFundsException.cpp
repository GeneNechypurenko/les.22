#include "InsufficientFundsException.h"

InsufficientFundsException::InsufficientFundsException(const char* error)
    :
    error(error)
{}

const char* InsufficientFundsException::what() const noexcept
{
    return error;
}
