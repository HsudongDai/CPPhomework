#include <iostream>
using namespace std;

int main()
{
    int allTimes = 0;
    int innerTimes = 0;
    cin >> allTimes;
    for (int i = 0; i < allTimes; i++){
        cin >> innerTimes;
        int output = 0;
        for (int j = 0; j < innerTimes; j++){
            int cnt = 0;
            cin >> cnt;
            output += cnt;
        }
        cout << output - innerTimes + 1 << endl;
    }
    return 0;
}
