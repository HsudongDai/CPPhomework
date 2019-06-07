//17软二戴旭东 转专业
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::setw;
using std::endl;

void displayPattern(int n);

int main()
{
    //'stories' is the plural form of storey.
    //when the input is bigger than 47, the display  numbers will overlap
    //each other in the full-screen mode, or 30 in the default size of console
    cout << "Please enter the stories of the pattern: ";
    int n;
    cin >> n;
    displayPattern(n);
    return 0;
}

void displayPattern(int n)
{
    int spc = 0;
    int temp = n;
    while (temp != 0){ // The while loop is to get the number of digits of
        temp /= 10;    // input integer 'n' in order to prevent the potential
        ++spc;         // overlap of displayed numbers
    }
    for(int i = 1; i <= n ; i++){
        for (int k = 0; k < n - i; k++)
            cout << setw(spc + 2) << " ";
        for (int j = i; j > 0; j--)
            cout << setw(spc + 2) << j ;
        cout << endl;
    }
}
