//17软二戴旭东 转专业
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int bin2Dec(const string & binaryString);

int main()
{
    cout << "Please enter a binary-digit string: ";
    string buf;
    cin >> buf;
    int rep = bin2Dec(buf);
    cout << "The decimal form of " << buf << " is " << rep;
    return 0;
}

int bin2Dec(const string & bs)
{
    int rst = 0;
    int cnt = bs.length() - 1;
    for (int i = 0; i <= bs.length() - 1; i++){
         if (bs[i] == '1'){
            rst += pow(2, cnt);
            --cnt;
         }
    }
    return rst;
}
