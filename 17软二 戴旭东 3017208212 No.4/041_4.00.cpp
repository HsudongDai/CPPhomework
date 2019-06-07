//17软二戴旭东 转专业
#include <iostream>
#include <cctype>
using std::cout;
using std::cin;

int show(int[], int);

int main()
{
    int source1[] = {4, 5, 6, 7};
    int source2[] = {2, 3, 7, 0};
    int source3[] = {1, 3, 5, 7};
    int cnt1 = show(source1, 1);
    int cnt2 = show(source2, 2);
    int cnt3 = show(source3, 3);
    cout << "Your favorite day is " << cnt1 + cnt2 + cnt3;
    return 0;
}

int show(int recp[], int times)
{
    char ch;
    cout << "Is your favorite day in Set" << times << " ?\n";
    for (int i = 0; i < 4; i++)
        cout << recp[i] << " ";
    cout << "\nEnter N/n for No and Y/y for Yes: ";
    cin >> ch;
    ch = tolower(ch);
    if (ch == 'y')
        return recp[0];
    else
        return 0;
}
