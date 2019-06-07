#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int pas;
    cin >> pas;
    while(pas--)
    {
        int nt;
        cin>>nt;
        int ans=1,cnt;
        for(int i=2; i<=nt; i++)
        {
            cnt=1;
//            s(i);
            for(int j=2; j<=i; j++)
            {
                if(!(i % j))
                {
                    cnt++;
//                    s(j);
                }

            }
            if(cnt & 1)
                ans++;
        }

        printf("%d\n",ans);
    }
    return 0;
}
