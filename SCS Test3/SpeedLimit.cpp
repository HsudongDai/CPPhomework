#include<iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num;
    int pre,ans,vel,tim;
    while((cin >> num) && num!=-1)
    {
        pre = 0, ans = 0;
        for(int i = 0; i < num; i++)
        {
            cin >> vel >> tim;
            ans += vel * (tim - pre);
            pre = tim;
        }
        printf("%d miles\n",ans);
    }
    return 0;
}
