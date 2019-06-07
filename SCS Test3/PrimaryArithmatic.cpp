#include<iostream>
#include<stdio.h>
using namespace std;



int main()
{
    int left, right;
    while(cin>>left && cin>>right &&(left||right))
    {
        int cnt=0,flag=0;
        while(left||right)
        {
            if(left % 10+ right % 10+ flag>9)
            {
                cnt++;
            }
            else flag=0;
            left /=10;
            right /=10;
            flag=1;
        }
        if(!cnt)
            printf("No carry operation.");
        else if(cnt>1)
            printf("%d carry operations.\n",cnt);
        else
            printf("1 carry operation.");
    }

    return 0;
}
