//17级软工二班 戴旭东（转专业）
#include <iostream>
using std::cout;

double slope(double, double, double, double);

int main()
{
    cout << "Enter the coordinates of two points: ";
    double x1, y1, x2, y2;
    double result;
    std::cin >> x1 >> y1 >> x2 >> y2;
    result = slope(x1, y1, x2, y2);
    cout << "The slope for the line that connects two points ("
         << x1 << ", " << y1 << ") and (" << x2 << ", " << y2
         << ") is " << result;
    return 0;
}

double slope (double x1, double y1, double x2, double y2)
{
    return (y2 - y1) / (x2 - x1);
}
