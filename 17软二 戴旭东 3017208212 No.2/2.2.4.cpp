//17级软工二班 戴旭东（转专业）
#include <iostream>
using std::cout;

void interest(double, double);

int main()
{
    cout << "Enter balance and interest rate (e.g., 3 for 3%): ";
    double bal, rate;
    std::cin >> bal >> rate;
    interest(bal, rate);
    return 0;
}

void interest(double balance, double intRate)
{
    double intr = balance * intRate / 1200;
    cout << "The interest is " << intr;
}
