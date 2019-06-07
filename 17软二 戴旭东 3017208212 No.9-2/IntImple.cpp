#include <iostream>
#include "MyInteger.h"

bool MyInteger::isEven(int n)
{
    return (n % 2 == 0);
}

bool MyInteger::isOdd(int n)
{
    return (n % 2 != 0);
}

bool MyInteger::isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i< n; i++){
        if (n % i == 0)
            return false;
    }
    return true;
}

bool MyInteger::isEven() const
{
    return MyInteger::getValue() % 2 == 0;
}

bool MyInteger::isOdd() const
{
    return MyInteger::getValue() % 2 != 0;
}

bool MyInteger::isPrime() const
{
    if (MyInteger::getValue() < 2)
        return false;
    for (int i = 2; i * i< MyInteger::getValue() ; i++){
        if (MyInteger::getValue()  % i == 0)
            return false;
    }
    return true;
}
