#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{

    int n, t, cnt,num;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        cnt = 0;
        num = 0;
        while (t){
            if (t & 1){
                if (num)
                    cout << " ";
                cout << cnt;
                num++;
            }
            t /= 2;
            cnt++;
        }
        cout << endl;
    }
    return 0;
    /*cin >> numbers;
    int * goal = new int[numbers];
    for (int i = 0; i < numbers; i++){
        cin >> goal[i];
    }

    vector<int> result;
    int times[numbers];
    for (int j = 0; j < numbers; j++){
        stack<int> buff;
        int temp = goal[j];
        while (temp){
            int rm = temp % 2
            buff.push(rm);
            temp /= 2;
        }
        times[j] = buff.size();
        for (int k = 0; k < buff.size(); k++){
            result.push_back(buff.pop(k));
        }
    }
    int count = 0;
    for (int k = 0; k < numbers; k++){
        int limit = temp[k] - 1;
        for (int m = count; m < limit; m++){

        }
    }
    delete []goal;
    return 0;
    */
}
