#include <iostream>
#include <sstream>
using std::cin;
using std::cout;

int main()
{
    int temp;
    while (cin >> temp){
        cout << static_cast<char> (temp);
    }
    return 0;
}
