#include <iostream>
using namespace std;

int main()
{
    int times = 0;
    cin >> times;
    while (times != -1){
        int res = 0;
        int pre = 0;
        while (times--){
            int all = 0;
            int speed = 0;
            cin >> speed >> all;
            res += speed * (all - pre);
            pre = all;
        }
        cout << res << " miles." << endl;
        cin >> times;
    }
    return 0;
}
