//17软二戴旭东 转专业
#include <iostream>
using std::cout;
using std::cin;

int main()
{
    //use Crammer rules to solve linear equations
    double a, b, c, d, e, f;
    cout << "Enter a, b, c, d, e, f";
    cin >> a >> b >> c >> d >> e >> f;
    if (a*d - b*c == 0)
        cout << "The equation has no solution.";
    else
        cout << "x is " << (e*d - b*f) / (a*d - b*c)
             << " and y is " << (a*f - e*c) / (a*d - b*c);
    return 0;
}
