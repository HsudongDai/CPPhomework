#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string plain, mapping;
    //cin >> plain >> mapping;
    plain = "abcdefghijklmnopqrstuvwxyz";
    mapping = "zyxwvutsrqponmlkjihgfedcba";
    string buffer;
    cout << mapping << endl;
    cout << plain << endl;
    while (getline(cin, buffer))
    {
        for (int i = 0; i < buffer.length(); i++)
        {
            int pos = plain.find(buffer[i]);
            if (pos == string::npos)
                continue;
            else
                buffer[i] = mapping[pos];
        }
        cout << buffer << endl;
    }
    return 0;
}
