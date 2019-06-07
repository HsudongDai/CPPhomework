//17软二戴旭东 转专业
#include <iostream>
#include <string>
#include <cctype>
using std::cout;

int main()
{
    std::string ssn;
    cout << "Please enter a Social Security Number: ";
    std::cin >> ssn;
    bool b1 = false;
    bool b2 = false;
    if(ssn.length() != 11)
        b1 = b2 = false;
    for(int i = 0; i < ssn.length(); i++){
        if((i>=0 && i <2) || (i >=4 && i <=5) || (i >=7 && i <=11)){
            if(!isdigit(ssn[i]))
                b1 = true;
        }
        if (i == 3 || i == 6){
            if (static_cast<char> (ssn[i]) != '-')
                b2 = true;
        }
    }
    if (b1 || b2)
        cout << ssn << " is an invalid social security number.";
    else
        cout << ssn << " is a valid social security number.";
    return 0;
}
