//17软二戴旭东 转专业
#include <iostream>
#include <string>
#include <list>
using std::cout;
using std::cin;
using std::string;

int main()
{
    string city1;
    string city2;
    string city3;
    cout << "Please enter the 1st city: ";
    //cin.ignore();
    getline(cin, city1);
    //cin.get();
    cout << "Please enter the 2nd city: ";
    //cin.get();
    getline(cin, city2);
    cin.ignore();
    cout << "Please enter the 3rd city: ";
    //cin.get();
    getline(cin, city3);
    cin.ignore();
    std::list<string> arr = {city1, city2, city3};
    arr.sort();
    cout << "The 3 cities in alphabetical order: ";
    for(auto &x : arr)
        cout <<  x << ", ";
    return 0;
}
