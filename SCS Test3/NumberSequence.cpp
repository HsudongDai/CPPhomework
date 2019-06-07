#include<iostream>
using namespace std;

int cal(int n)
{
    if(n & 1)
        return 3 * n + 1;
    else
        return n/2;
}

int main()
{
    int num = 0;
    int res,cnt;
    while((cin >> num) && num)
    {
        res = 0;
        cnt = 1;
        int tem = num;
        while(tem != 1)
        {
            tem = cal(tem);
            ++cnt;
        }
        cout << cnt << endl;
    }
    return 0;
}
