#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        double length = 0;
        int cnt = 0;
        cin >> length >> cnt;
        /*int * conta = new int[cnt];
        for (int j = 0; j < cnt; j++){
            int tmep = 0;
            cin >> tmep;
            conta[j] = tmep;
        }
        */
        int max = 0, c_max = 0;
        int min = 2000000000, c_min = 0;
        for (int k = 0; k < cnt; k++){
            int temp = 0;
            cin >> temp;
            int res = temp - length / 2;
            res = abs(res);
            if (res < min){
                min = res;
                c_min = (temp < (length - temp)) ? temp : length - temp;
            }
            if (res > max){
                max = res;
                c_max = (temp > (length - temp)) ? temp : length - temp;
            }
        }
        cout << c_min << ' ' << c_max << endl;
        //delete []conta;
    }
    return 0;
}
