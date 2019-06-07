#ifndef MYINTEGER_H_INCLUDED
#define MYINTEGER_H_INCLUDED
#include <iostream>

class MyInteger{
private:
    int value;

public:
    MyInteger(int n) : value(n) {}
    int getValue() const {
        return value;
    }
    static bool isEven(int n);
    static bool isOdd(int n);
    static bool isPrime(int n);
    bool isEven() const;
    bool isOdd() const;
    bool isPrime() const;
    bool equals(const MyInteger &) const;
};

#endif // MYINTEGER_H_INCLUDED
