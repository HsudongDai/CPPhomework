//17软二戴旭东 转专业
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using std::cout;

int main()
{
    //std::string show;
    srand(time(0));
    char io[5];
    for(int i = 0; i < 5; i++){
        int temp = rand() % 26 + 97;
        //cout << temp << std::endl;
        io[i] = static_cast<char> (temp);
    }
    std::string show;
    show = io;
    cout << show;
    return 0;
}
