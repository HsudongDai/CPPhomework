//17软工二班 戴旭东 转专业
#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using std::string;
using std::cin;
using std::cout;

int main()
{
    string ranks[] = {"Ace", "2","3", "4", "5", "6", "7",
                    "8", "9", "10","Jack", "Queen", "King"};
    string suit[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
    //int a = rand() % 13;
    //int b = rand() % 4;
    std::srand(clock());
    for(int i = 0; i < 10; i++)
    cout << "The card you pick is " << ranks[rand() % 13]
         << " of " << suit[rand() % 4] << std::endl;
    return 0;
}
