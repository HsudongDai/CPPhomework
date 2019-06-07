#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    /*
    string left, right;
    while (cin >> left >> right)
    {
        string longer = left;
        string shorter = right;
        int cnt = 0;
        if (left.length() != right.length())
        {
            string longer = (left.length() > right.length()) ? left : right;
            string shorter = (left.length() < right.length()) ? left : right;
        }
        int length = shorter.length();
        for (int i = length - 1; i > -1; i--)
        {
            int digit_L = static_cast<int> (left[i] - '0');
            int digit_R = static_cast<int> (right[i] - '0');
            if (digit_L + digit_R > 9)
                ++cnt;
        }
        int diff = longer.length() - shorter.length();
        if (longer.length() > shorter.length() && longer[diff - 1] == '9'
                &&(static_cast<int> (shorter[0] - '0') + static_cast<int> (longer[diff] - '0') > 9)
           )
            ++cnt;
        if (cnt == 0)
        {
            cout << "No carry operation.";
        }
        else if (cnt == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << cnt << " carry operations." ;
        }
    }
    */
    int m,n;
    while(cin >> m && cin >> n && (m || n))
    {
        int cnt = 0, flag = 0;
        while(m || n)
        {
            if(m % 10 + n % 10 + flag > 9)
            {
                cnt++;
            }
            else
                flag = 0;
            m /= 10;
            n /= 10;
            flag = 1;
        }
        if(!cnt)
            puts("No carry operation.");
        else if (cnt > 1)
            printf("%d carry operations.\n",cnt);
        else
            puts("1 carry operation.");
    }
    return 0;
}
