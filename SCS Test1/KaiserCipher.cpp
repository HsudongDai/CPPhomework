#include <iostream>
#include <string>
using namespace std;

int main()
{
    int times;
    cin >> times;
    string buf;
    int step;
    for (int i = 0; i < times; i++){
        cin >> buf;
        cin >> step;
        //cout << buf;
        for (int k = 0; k < buf.size(); k++){
            char temp = buf[k];
            int temp2 = temp - 'a';
            temp2 = (temp2 + step) % 26;
            temp = static_cast<char>(temp2 + 'a');
            buf[k] = temp;
            //cout << buf[k] << endl;
        }
        cout << buf << endl;
    }
    return 0;
}
