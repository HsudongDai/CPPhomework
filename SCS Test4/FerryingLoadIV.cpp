#include <cstdio>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int times, lcnt, rcnt, on, len, total,l;
    string s;
    cin >> times;
    while (times--)
    {
        queue<int> le, ri;
        cin >> len >> total;
        len *= 100;
        while (total--)
        {
            cin >> l >> s;
            if (s[0] == 'l')
                le.push (l);
            else
                ri.push (l);
        }
        lcnt = on = 0;
        while (!le.empty())
        {
            while (!le.empty() && on + le.front() < len){
                on += le.front();
                le.pop();
            }
            ++lcnt;
            on = 0;
        }
        rcnt = on = 0;
        while (!ri.empty())
        {
            while (!ri.empty() && on + ri.front() < len){
                on += ri.front();
                ri.pop();
            }
            ++rcnt;
            on = 0;
        }
        if (lcnt > rcnt)
            printf ("%d\n", 2 * lcnt - 1);
        else
            printf ("%d\n", 2 * rcnt);
    }
    return 0;
}
