//17级软工二班 戴旭东（转专业）
#include <iostream>
using std::cout;
using std::cin;

void costOfDriving(double, double, double);

int main()
{
    double distance, miles, price;
    cout << "Enter the driving distance: ";
    cin >> distance;
    cout << "Enter miles per gallon: ";
    cin >> miles;
    cout << "Enter price per gallon: ";
    cin >> price;
    costOfDriving(distance, miles, price);
    return 0;
}

void costOfDriving(double dst, double mls, double prx)
{
    cout << "The cost of driving is $" << dst / mls * prx;
}
