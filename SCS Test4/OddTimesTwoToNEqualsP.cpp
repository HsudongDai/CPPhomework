#include <iostream>
using namespace std;

void DivAndRoot(int rock)
{
    int square = 1;
    int count = 0;
    int odd = 1;
    while (square < rock)
    {
        if (rock % square == 0)
        {
            if ((rock / square) % 2 != 0)
            {
                odd = rock / square;
                break;
            }
        }
        square *= 2;
        ++count;
    }
    cout << odd << ' ' << count << endl;
}

int main()
{
    int times = 0;
    cin >> times;
    for (int i = 0; i < times; i++)
    {
        int goal;
        cin >> goal;
        DivAndRoot(goal);
    }
    return 0;
}
