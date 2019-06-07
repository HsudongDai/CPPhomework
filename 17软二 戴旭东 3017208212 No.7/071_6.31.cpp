//17软二戴旭东 转专业
#include <iostream>
#include <list>
using namespace std;

void sort(double &num1, double &num2, double &num3);

int main()
{
    double num1, num2, num3;
    cout << "Please enter 3 numbers\n";
    cout << "No.1: ";
    cin >> num1;
    cout << "No.2: ";
    cin >> num2;
    cout << "No.3: ";
    cin >> num3;
    sort(num1, num2, num3);
    return 0;
}

void sort(double &num1, double &num2, double &num3)
{
    double bi[] = {num1, num2, num3};
    if (bi[0] > bi[1]){
        double temp = bi[0];
        bi[0] = bi[1];
        bi[1] = temp;
    }
    if (bi[0] > bi[2]){
        double temp = bi[0];
        bi[0] = bi[2];
        bi[2] = temp;
    }
    if (bi[1] > bi[2]){
        double temp = bi[1];
        bi[1] = bi[2];
        bi[2] = temp;
    }
    for (int j = 0; j <= 2; j++)
        cout << bi[j] << " ";
}
