#include <iostream>
using namespace std;

int main()
{
    int order, element;
    while (cin >> order >> element)
    {
        int row, line;
        row = element / order + 1;
        line = element % order;
        if (element % order == 0)
        {
            row = element / order;
            line = order;
        }
        while (row > 1 && line > 1)
        {
            element -= (order + 1);
            --row;
            --line;
        }
        while (row <= order && line <= order)
        {
            if (row == order || line == order)
                cout << element;
            else
                cout << element << ' ';
            element += (order + 1);
            ++row;
            ++line;
        }
        cout << endl;
    }
    return 0;
}
