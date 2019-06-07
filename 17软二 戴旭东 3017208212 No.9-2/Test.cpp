#include <iostream>
#include "MyInteger.h"

using namespace std;

int main()
{
    MyInteger test1(8);
    if (test1.isEven())
        cout << "It is even." << endl;
    if (!test1.isOdd())
        cout << "It isn't odd." << endl;
    if (!test1.isPrime())
        cout << "It is not prime." << endl;
    if (test1.isPrime(7))
        cout << "The input is a prime number." << endl;
    if (test1.isOdd(7))
        cout << "It is odd." << endl;
    if (!test1.isEven())
        cout <<  "It isn't even" << endl;
    return 0;
}
