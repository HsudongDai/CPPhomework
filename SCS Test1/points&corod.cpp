#include <iostream>
using namespace std;

int main()
{
    int times = 0;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int x = 0, y = 0;
        cin >> x >> y;
        if (x == y)
        {
            if (x % 2 == 0)
            {
                cout << 4 * (x / 2) << endl;
            }
            else
            {
                cout << 4 * ((x - 1) / 2) + 1 << endl;
            }
        }
        else if (x - y == 2)
        {
            if (x % 2 == 0)
            {
                cout << ((x / 2) - 1) * 4 + 2 << endl;
            }
            else
            {
                cout << (((x - 1) / 2) - 1) * 4 + 3 << endl;
            }
        }
        else
        {
            cout << "No Number\n";
        }
    }
    return 0;
}
