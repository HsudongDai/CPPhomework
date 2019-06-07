//17软工二班 戴旭东 转专业
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cin;
using std::cout;
using std::endl;

int main()
 {
 // Generate a lottery
    srand(time(0));
    int lottery = rand() % 1000;
    int cnt = 0;
    int lotteryDigit[3];
    int guessDigit[3];

    // Prompt the user to enter a guess
    cout << "Enter your lottery pick (3 digits): ";
    int guess;
    cin >> guess;

    // Get digits from lottery
    lotteryDigit[0] = lottery / 100;
    lotteryDigit[1] = (lottery - lotteryDigit[0] * 100) / 10;
    lotteryDigit[2] = (lottery - lotteryDigit[0] * 100) % 10;

 // Get digits from guess
    guessDigit[0] = guess / 100;
    guessDigit[1] = (guess - guessDigit[0] * 100) / 10;
    guessDigit[2] = (guess - guessDigit[0] * 100) % 10;


 // Check the guess
    if (guess == lottery)
        cout << "Exact match: you win $10,000" << endl;
    else if (cnt >= 3)
        cout << "Match all digits: you win $3,000" << endl;
    else if (cnt == 1)
        cout << "Match one digit: you win $1,000" << endl;
    else
        cout << "Sorry, no match" << endl;

 return 0;
}
