//17软工二班 戴旭东 转专业
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;

int main()
{
    const int radius = 10;
    double x, y;
    cout << "Enter a point with two coordinates: ";
    cin >> x >> y;
    if (std::sqrt(x * x + y * y) < 10)
        cout << "Point (" << x << ", " << y
           << ") is in the circle.";
    else
         cout << "Point (" << x << ", " << y
           << ") is not in the circle.";
    return 0;
}
