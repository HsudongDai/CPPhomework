//17软工二班 戴旭东 转专业
#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a = rand() % 89 + 10;
    /*int cnt = 0;
    while (cnt != 100){
        cnt++;
        cout << a << endl;
        a = rand() % 89 + 10;
    }*/
    int b = 0;
    cout << "Predict the two-digit number! \n";
    cout << "Enter your prediction: ";
    cin >> b;
    if (b == a)
        cout << "Your accuracy is 100%!";
    else if((b % 10 == a % 10) || (a /10 == b / 10))
        cout << "Your accuracy is 50%";
    else
        cout << "Sorry, your accuracy is 0";
    return 0;
}
