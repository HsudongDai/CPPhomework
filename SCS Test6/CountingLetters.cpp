#include <iostream>
#include <string>
using namespace std;

int main()
{
    int times = 0;
    cin >> times;
    while (times--){
        string buf;
        cin >> buf;
        int record[26];
        for (int i = 0; i < 26; i++){
            record[i] = 0;
        }
        for (int j = 0; j < buf.length() ; j++){
            int pos = buf[j] - 'a';
            record[pos] += 1;
        }
        int max = 0;
        for (int k = 0; k < 26; k++){
            if (record[k] > max)
                max = record[k];
        }
        for (int m = 0; m < 26; m++){
           if (record[m] == max){
                cout << static_cast<char> ('a' + m);
           }
        }
        cout << endl;
    }
    return 0;
}
