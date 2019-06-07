//17软二戴旭东 转专业
#include <iostream>

using std::cout;

int main()
{
    cout << "Please enter a decimal number: ";
    int target, temp, cnt;
    int remainder[31];
    //定义了一个remainder数组，用来收集短除法除得的余数，栈倒序输出。
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
