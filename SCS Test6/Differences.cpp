#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int times;
    cin >> times;
    while (times--){
        int repeat = 0;
        cin >> repeat;
        long long max = LLONG_MIN;
        long long min = LLONG_MAX;
        for (int i = 0; i < repeat; i++){
            long long temp;
            cin >> temp;
            if (temp > max)
                max = temp;
            if (temp < min)
                min = temp;
        }
        cout << max - min << endl;
    }
    return 0;
}
