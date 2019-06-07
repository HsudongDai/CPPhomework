//17软二戴旭东 转专业
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    bool o1 = false;
    bool o2 = false;
    string major[] = {"Computer Science", "Mathematics", "Information Technology"};
    string grade[] = {"Freshman", "Sophomore", "Junior", "Senior"};
    cout << "Please enter 2 characters: ";
    string nick;
    cin >> nick;
    switch(toupper(static_cast<char> (nick[0]))){
        case 'T':
            cout << major[2];
            break;
        case 'M':
            cout << major[1];
            break;
        case 'C':
            cout << major[0];
            break;
        default:
            o1 = true;
            break;
    }
    switch(static_cast<char> (nick[1])){
        case '1':
            cout << " " << grade[0];
            break;
        case '2':
            cout << " " << grade[1];
            break;
        case '3':
            cout << " " << grade[2];
            break;
        case '4':
            cout << " " << grade[3];
            break;
        default:
            o2 = true;
            break;
    }
    if (o1 || o2)
        cout << "Invalid status code.";
    return 0;
     }

