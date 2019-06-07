#include <iostream>
#include <string>
using namespace std;

int main()
{
    int times = 0;
    cin >> times;
    for (int i = 0; i < times; i++){
        string buf;
        cin >> buf;
        for (int j = 0; j < buf.length(); j++){
            char rep = buf[j];
            if (rep == 'Z')
                rep = 'A';
            else
                rep = static_cast<char> (rep + 1);
            buf[j] = rep;
        }
        cout << "String #" << i + 1 << endl;
        cout << buf << endl << endl;
    }
    return 0;
}
