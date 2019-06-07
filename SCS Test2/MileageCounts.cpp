#include <iostream>
#include <cctype>
#include <string>
using namespace std;

double getMiles(string proc)
{
    double miles = 0;
    for (int i = 0; i < proc.length(); i++)
    {
        char carry = proc[i];
        if (isdigit(carry))
        {
            miles = miles * 10 + static_cast<int> (carry - '0');
        }
    }
    return miles;
}

int main()
{
    string target;
    double result = 0;
    char mark;
    getline(cin, target);
    while (target[0] != '0')
    {
        if (target[0] == '#')
            break;
        double temp = 0;
        temp = getMiles(target);
        mark = target[target.length() - 1];
        switch (mark)
        {
        case 'Y':
            if (temp > 500)
                result += temp;
            else
                result += 500;
            break;
        case 'B':
            result += (temp * 1.5);
            break;
        case 'F':
            result += (temp * 2);
            break;
        default:
            break;
        }
        getline(cin, target);
    }
    cout << result;
    return 0;
}

/*
#include <iostream>
#include<stdio.h>
#include<cctype>
#include<cmath>
using namespace std;

int getMile(string s)
{

    int a=0;
    for(unsigned int i=0; i<s.length(); i++)
    {
        if(isdigit(s[i]))
        {
            a+=pow(10,s.length()-3-i)*static_cast<int>(s[i]-'0');
        }
    }
    return a;

}
int main()
{
    string s="s";
    while(s[0]!='#')
    {
        double count=0;
        while(s[0]!='0')
        {
            if(s[s.length()-1]=='F')
            {
                count+=2*getMile(s);
            }
            if(s[s.length()-1]=='B')
                count+=1.5*getMile(s);
            if(s[s.length()-1]=='Y')
            {
                if(getMile(s)<=500)
                    count+=500;
                else
                    count+=getMile(s);
            }

            getline(cin,s);
        }
        cout << count << endl;
        getline(cin,s);

    }
    return 0;
}
*/
