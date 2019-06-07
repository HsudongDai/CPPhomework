#include <iostream>
using namespace std;

//Least Common Multiple
int LCM(int a, int b){
    int min = (a < b) ? a : b;
    int max = (a >= b) ? a : b;
    int cnt = 1;
    while (min * cnt < a * b){
        if (min * cnt % max == 0)
            return min * cnt;
        ++cnt;
    }
    return a * b;
}

//Greatest Common Factor
int GCE(int a, int b){
    int min = (a < b) ? a : b;
    int max = (a >= b) ? a : b;
    if (min == 0)
        return -1;
    while (max % min != 0){
        int tem = max % min;
        max = min;
        min = tem;
    }
    return min;
}

int main()
{
    int times;
    cin >> times;
    for (int i = 0; i < times; i++){
        int a = 0, b = 0;
        cin >> a >> b;
        cout << i + 1 << " " << LCM(a, b) << " " << GCE(a, b) << endl;
    }
    return 0;
}
