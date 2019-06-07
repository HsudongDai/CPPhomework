//17软工二班 戴旭东 转专业
#include <iostream>
#include <algorithm>
#include <vector>
using std::cin;
using std::cout;

int main(){
    int a, b, c;
    cout << "Please enter 3 random integers: ";
    cin >> a >> b >> c;
    /*
    int recp[] = {a, b, c};
    for (int i = 0; i < (sizeof(recp) / sizeof(recp[0])) - 1; i++){
        if (recp[i + 1] < recp[i]){
            int temp = recp[i+1];
            recp[i+1] = recp[i];
            recp[i] = temp;
        }
    }
    */
    std::vector<int> receptor = {a, b, c};
    std::sort(receptor.begin(), receptor.end());
    for (auto & x ][
         : receptor)
        cout << x << " ";
    return 0;
}
