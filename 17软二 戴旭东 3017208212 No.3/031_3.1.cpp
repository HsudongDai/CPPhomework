//17级软工二班 戴旭东
#include <iostream>
#include <cmath>
using std::cout;
using std::endl;

int main()
{
    double a, b, c;
    cout << "Please enter the coefficients of a quadratic equation .\n";
    cout << "Enter a, b, c";
    std::cin >> a >> b >> c;
    if ((b * b - 4 * a * c) > 0){
        cout << "The roots are: " << (-b + sqrt(b * b - 4 * a * c)) / (2 * a)
             << " and " << (-b - sqrt(b * b - 4 * a * c)) / (2 * a) ;
    }
    else if ((b * b - 4 * a * c) == 0)
        cout << "The root is " << -b / 2 * a;
    else
        cout << "The equation has no real roots.";
    system("pause");
    return 0;
}
