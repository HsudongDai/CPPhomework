#include<stdio.h>
#include<string.h>
#include<map>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        map<int,int >s;
        s.clear();//½÷É÷Ò»µãºÃ¡£
        int sum=0;
        int output=0;
        s[0]=1;
        for(int i=0; i<n; i++)
        {
            int a;
            scanf("%d",&a);
            sum+=a;
            s[sum]++;
            output+=s[sum-47];
        }
        printf("%d\n",output);
    }
}
