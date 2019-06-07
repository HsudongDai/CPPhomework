#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.1415926535;
    int times;
    cin >> times;
    for (int i = 0; i < times; i++){
        double x, y;
        cin >> x >> y;
        double radius = 0;
        double area = 0;
        int count = 0;
        while ((x*x + y*y) > radius){
            area += 50;
            radius = 2 * area / pi;
            //cout << radius << endl;
            ++count;
        }
       // while ((x*x + y*y) < radius);
        cout << "Property " <<  i + 1
            << ": This property will begin eroding in year "
            << count << "." << endl;
    }
    cout << "END OF OUTPUT.";
    return 0;
}
