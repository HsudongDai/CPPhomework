#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double t0[] = {0.643, 0.637, 0.576, 0.684, 0.639, 0.620
    , 0.639, 0.618, 0.638, 0.621};
    double t1[] = {1.157, 1.155, 1.136, 1.154, 1.151, 1.140,
    1.151, 1.151, 1.078, 1.190};
    const double avg0 = 0.6315;
    const double avg1 = 1.1466;
    double temp1 = 0;
    for (auto &x : t1){
        temp1 += pow(x - avg0, 2);
    }
    double ua = sqrt(temp1 / 90);
    double Ua = 2 * sqrt(ua * ua + pow(0.002/sqrt(3), 2));
    cout << temp1 << " " << Ua;
    return 0;
}
