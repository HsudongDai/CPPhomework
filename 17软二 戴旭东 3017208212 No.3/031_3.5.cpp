//������ ���� תרҵ
#include <iostream>
#include <string>
using std::cout;
const std::string Week[] = {"Sunday", "Monday", "Tuesday",
    "Wednesday", "Thursday", "Friday", "Saturday"};

int main(){
    int today = 0, elapse = 0;
    cout << "Enter today's day: ";
    std::cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    std::cin >> elapse;
    cout << "Today is " << Week[today % 7]
        << " and the future day is " << Week[(today + elapse) % 7];
    return 0;
}
