//17软工二班 戴旭东 转专业
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::srand(std::time(0));
    int number1 = rand() % 51;
    int number2 = rand() % 51;

    if (number1 < number2){
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }
    cout << "What is " << number1 << " - " << number2 << "? ";
    int answer;
    cin >> answer;

 // 4. Grade the answer and display the result
    if (number1 - number2 == answer)
        cout << "You are correct!";
    else
    cout << "Your answer is wrong. " << number1 << " - " << number2
            << " should be " << (number1 - number2) << endl;

    return 0;
}
