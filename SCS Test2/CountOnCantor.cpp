#include <iostream>
using namespace std;

int main()
{
    int pos = 0;
    while (cin >> pos)
    {
        int cnt = 1;
        int sum = 1;
        while (sum < pos)
        {
            ++cnt;
            sum += cnt;
        }
        sum -= cnt;
        int over = 0;
        int bottom = 0;
        if (cnt % 2 == 0)
        {
            over = 1;
            bottom = cnt;
            for (int i = 1; i < pos - sum; i++)
            {
                ++over;
                --bottom;
            }
        }
        if (cnt % 2 != 0)
        {
            over = cnt;
            bottom = 1;
            for (int i = 1; i < pos - sum; i++)
            {
                --over;
                ++bottom;
            }
        }
        cout << "TERM " << pos << " IS " << over << "/" << bottom << endl;
    }
    return 0;
}
