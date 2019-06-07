//17软工二班 戴旭东 转专业
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Please enter the length of three edges of a triangle.";
    double edge_a, edge_b, edge_c;
    cin >> edge_a >> edge_b >> edge_c;
    if (edge_a == edge_b && edge_a == edge_c){
        cout << "Your input is valid! \n"
             << "The area of this triangle is "
             << std::sqrt(3) * 2 * edge_a * edge_b;
    }
    else
        cout << cout.precision(10) << "The length of 3 edges must be equal!";
    return 0;
}
