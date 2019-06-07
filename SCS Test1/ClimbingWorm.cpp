#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int climb, depth, slide;
    while (cin >> depth >> climb >> slide) {
        int temp = (depth - climb) / (climb - slide);
        int temp2 = temp * (climb - slide);
        if (temp2 < (depth - climb)) {
            temp++;
        }
        temp = temp * 2;
        ++temp;
        cout << temp;
    }
    return 0;
}
