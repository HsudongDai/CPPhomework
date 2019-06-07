#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;

void reve(string s)
{
    reverse(s.begin(),s.end());
    cout << s;
}

int main()
{
    int n;
    cin >> n;
    string temp;
    cin.get();
    for(int i = 1; i <= n; i++)
    {
        getline(cin, temp);
        stringstream ssb;
        ssb << temp;
        int t = 0;
        while(ssb >> temp)
        {
            if(t++)
                cout << ' ';
            reve(temp);
        }
        puts("");
    }

    return 0;
}
