//17软二戴旭东 转专业
#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int getNumber(char getUppercase);

int main()
{
    string buf;
    cout << "Please enter your tel number: ";
    cin >> buf;
    for (int i = 0; i < buf.length() ; i++){
        if (isalpha(buf[i])){
            tolower(buf[i]);
            char tep = buf[i];
            buf[i] = static_cast<char> ('0' +(getNumber(tep)));
        }
    }
    cout << "The tel number is: " << buf;
    return 0;
}

int getNumber(char get)
{
    if (get >= 'a' && get <= 'c')
        return 2;
    else if (get >= 'd' && get <= 'f')
        return 3;
    else if (get >= 'g' && get <= 'i')
        return 4;
    else if (get >= 'j' && get <= 'l')
        return 5;
    else if (get >= 'm' && get <= 'o')
        return 6;
    else if (get >= 'p' && get <= 's')
        return 7;
    else if (get >= 't' && get <= 'v')
        return 8;
    else
        return 9;
}
