//17级软工二班 戴旭东（转专业）
#include <iostream>
#include <string>
#include <iomanip>
using std::cout;
using std::setw;

void DrawC();

int main()
{
    DrawC();
    return 0;
}

void DrawC()
{
    cout << "  CCCC" << setw(6) << "+" << setw(10) << "+\n";
    cout << " C    " << setw(6) << "+" << setw(10) << "+\n";
    cout << "C     " << "  +++++++  +++++++\n";
    cout << " C    " << setw(6) << "+" << setw(10) << "+\n";
    cout << "  CCCC" << setw(6) << "+" << setw(9) <<  "+";
}
