//17级软工二班 戴旭东（转专业）
#include <iostream>
#include <cmath>
#define Pi 3.1415926
using std::cout;

void volCyl(double radius, double length);

int main()
{
    double radius, length;
    cout << "Enter the radius and length of a cylinder: ";
    std::cin >> radius >> length;
    volCyl(radius, length);
    return 0;
}

void volCyl(double radius, double length)
{
    cout << "The area is " << radius * radius * Pi << std::endl;
    cout << "The volume is " << pow(radius, 2) * length * Pi;
}
