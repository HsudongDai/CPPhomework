//17������� תרҵ
#include <iostream>

using std::cout;

int main()
{
    cout << "Please enter a decimal number: ";
    int target, temp, cnt;
    int remainder[31];
    //������һ��remainder���飬�����ռ��̳������õ�������ջ���������
    std::cin >> target;
    cnt = 0;
    while(target != 0){
        temp = target/2;
        cnt++;
        remainder[cnt] = target - temp * 2;
        target /= 2;
    };
    for (int i = cnt; i >= 1;i--){
       cout << remainder[i];
    }
    system("pause");
    return 0;
}
