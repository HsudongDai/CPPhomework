//17级软工二班 戴旭东（转专业）
#include <iostream>
#include <cmath>
using namespace std;

void furInVal(double, double, int);

int main()
{
    double amount;
    double rate;
    int year;
    cout << "Enter investment amount: ";
    cin >> amount;
    cout << "Enter annual interest rate in percentage: ";
    cin >> rate;
    cout << "Enter number of years: ";
    cin >> year;
    furInVal(amount, rate, year);
    return 0;
}

void furInVal (double amo, double rat, int yea)
{
    double answer = pow((rat / 100 / 12) + 1, 12) * amo;
    cout << "Accumulated value is $" << answer;
}
