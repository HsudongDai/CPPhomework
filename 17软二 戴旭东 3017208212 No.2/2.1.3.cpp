//17级软工二班 戴旭东（转专业）
#include <iostream>
#include <string>
using std::cout;
using std::string;

void tmTrans(int seconds);

int main()
{
    cout << "Enter an integer for seconds: ";
    int sec;
    std::cin >> sec;
    tmTrans(sec);
    return 0;
}

void tmTrans(int seconds)
{
    int hour;
    int minute;
    int left_sec;
    int temp;
    hour = seconds / 3600;
    temp = seconds - hour * 3600;
    minute = temp / 60;
    left_sec = temp % 60;

    string strHour = (hour <= 1) ? " hour" : " hours" ;
    string strMin = (minute <= 1) ? " minute " : " minutes ";
    string strLftSec = (left_sec <= 1) ? " second " : " seconds";

    cout << seconds << " seconds is "<< hour << strHour
         << ", " << minute << strMin
         << "and " << left_sec << strLftSec
         << '.';
}
