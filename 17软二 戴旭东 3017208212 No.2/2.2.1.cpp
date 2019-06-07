//17级软工二班 戴旭东（转专业）
#include <iostream>
using std::cout;

double sixTotal(double x);

int main()
{
    cout << "Enter the monthly saving amount: ";
    double temp;
    double output;
    std::cin >> temp;
    output = sixTotal(temp);
    cout << "After the sixth month, the account value is $" << output;
    return 0;
}

double sixTotal(double x)
{
    double total = 0;
    for (int i = 0; i <= 5; i++)
    {
        total += x;
        total *= 1.00417;
    }
    return total;
}
