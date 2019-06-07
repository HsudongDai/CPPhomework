#include<iostream>
#include<cstdio>
#include<cmath>
#define Pi acos(-1.0)
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double x,y,r=0;
        int cnt=0;
        cin >> x >> y;
//        s(x);s(y);
        double dis = (sqrt(x * x + y * y));
//        s(dis);
        while(dis > r)
        {
            r=sqrt(100.0/Pi+r*r);
            cnt++;
//            s(r);
        }
        printf("Property %d: This property will begin eroding in year %d.\n",i,cnt);
    }
    cout << "END OF OUTPUT.";
    return 0;
}
