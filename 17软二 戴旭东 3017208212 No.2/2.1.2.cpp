//17级软工二班 戴旭东（转专业）
#include <iostream>
using std::cout;

void subTotal(double fee, double rate);

int main()
{
    cout << "Enter the subtotal and the gratuity rate: ";
    double fee, rate;
    std::cin >> fee >> rate;
    subTotal(fee, rate);
    return 0;
}

void subTotal(double fee, double rate)
{
    double tip = fee * rate / 100;
    double total = fee + tip;
    cout << "The gratuity is $" << tip << " and total is $" << total;
}
