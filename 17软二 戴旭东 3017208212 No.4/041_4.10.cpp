//17软二戴旭东 转专业
#include <iostream>
#include <cctype>
using std::cout;
using std::cin;

int main()
{
    char ch;
    do{
    cout << "Please enter a letter and check \
whether it is a vowel: \n";
    cout << "Enter '/' to end.\n";
    cin >> ch;
    ch = tolower(ch);
    switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "It is a vowel.";
        break;
    case '/':
        break;
    default:
        cout << "It is a consonant.";
        }
    }while (ch != '/');
    return 0;
}
