#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> buff;
    int pointer = 0;
    int max = 0;
    buff.push_back("http://www.acm.org/");
    string order, address;
    while (cin >> order && order != "QUIT"){
        if (order == "VISIT"){
            cin >> address;
            if (max == pointer){
                buff.push_back(address);
                ++pointer;
                ++max;
            }
            else{
                buff[++pointer] = address;
            }
            cout << address << endl;
        }
        else if (order == "BACK"){
            if (pointer > 0){
                cout << buff[--pointer] << endl;
            }
            else
                cout << "IGNORED" << endl;
        }
        else if (order == "FORWARD"){
            ++pointer;
            if (pointer > max){
                cout << "IGNORED" << endl;
                --pointer;
            }
            else
                cout << buff[pointer] << endl;
        }
    }
}
