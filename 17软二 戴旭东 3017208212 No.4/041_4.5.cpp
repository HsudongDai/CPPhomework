//17软二戴旭东 转专业
#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
const double pi = 3.1415926;

int main()
{
    int lateral;
    double length;
    cout << "Please enter the sides of the polygon: ";
    cin >> lateral;
    cout << "Please enter the length of each edge: ";
    cin >> length;
    cout << "The area of the polygon is "
         << lateral * length * length / (4 * tan(pi / lateral))
         << '.';
    return 0;
}
