/*
#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main()
{
    int outTimes = 0;
    double out = 0;
    cin >> outTimes;
    for (int i = 0; i < outTimes; i++){
        int innerTimes = 0;
        cin >> innerTimes;
        double sum = 0;
        int carry[innerTimes];
        int prt = 0;
        for (int j = 0; j < innerTimes; j++){
            int temp = 0;
            cin >> temp;
            carry[j] = temp;
            sum += temp;
        }
        sum /= innerTimes;
        for (int k = 0; k < innerTimes; k++){
            if (carry[k] > sum)
                ++prt;
        }
        double plr = static_cast<double> (prt);
        double cnt = static_cast<double> (innerTimes);
        //cout << prt << " " << innerTimes << endl;
        out = plr / cnt;
        cout.precision(5);
        cout.setf(ios_base::showpoint);
        printf("%d%\n", 100 * out);
        out = 0;
    }
    return 0;
}
*/
#include <iostream>
#include <cstdio>
using namespace std;

#define max 1005

int n;
int f[max];
double average;

void input()
{
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> f[i];
        sum += f[i];
    }
    average = sum * 1.0 / n;
}

double work()
{
    int num = 0;
    for (int i = 0; i < n; i++)
        if (f[i] > average)
            num++;
    return num * 100.0 / n;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        input();
        printf("%.3f%%\n", work());
    }
    return 0;
}

