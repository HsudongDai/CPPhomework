//17软二戴旭东 转专业
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int cwin = 0;
    int hwin = 0;
    do{
        srand(clock());
        int com = rand() % 3;
        cout << "scissor (0), rock (1), paper (2): ";
        int user = 0;
        cin >> user;
        while (user < 0 || user > 2){
            cout << "Please enter again: ";
            cin >> user;
        }
        if (com == 0){
            switch(user){
                case 0:
                    cout << "Tied"<< endl;
                    break;
                case 1 :
                    cout << "You win"<< endl;
                    ++hwin;
                    break;
                case 2 :
                    cout << "You lose"<< endl;
                    ++cwin;
                    break;
                default:
                    cout << "Enter again please.";
                    break;
            }
        }
        if (com == 1){
            switch(user){
                case 0:
                    cout << "You win"<< endl;
                    ++hwin;
                    break;
                case 1 :
                    cout << "Tied"<< endl;
                    break;
                case 2 :
                    cout << "You lose"<< endl;
                    ++cwin;
                    break;
                default:
                    cout << "Enter again please.";
                    break;
                }
            }
        if (com == 2){
            switch(user){
                case 0:
                    cout << "You lose" << endl;
                    ++cwin;
                    break;
                case 1 :
                    cout << "You win"<< endl;
                    ++hwin;
                    break;
                case 2 :
                    cout << "Tied"<< endl;
                    break;
                default:
                    cout << "Enter again please.";
                    break;
            }
        }
    }while (cwin <= 2 && hwin <= 2);
        if (cwin == 2)
            cout << "Human wins";
        else if (hwin == 2)
            cout << "Computer wins";

        return 0;
}
