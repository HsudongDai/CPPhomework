//17软二戴旭东 转专业
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter 2 strings to find their common prefix.\n";
    cout << "Please enter the 1st string: ";
    getline(cin, s1);
    //cout << s1 << endl;
    cout << "Please enter the 2nd string: ";
    getline(cin, s2);
    //cout << s2 << endl;
    char buf[30] ;
    for (auto & p : buf)
        p = 0;
    for (int i = 0; i < s1.length() && i < s2.length(); i++){
        if (s1[i] == s2[i]){
           buf[i] = s2[i];
        }
        else
            break;
    }
    for (auto & x : buf)
        cout << x;
    return 0;
}
