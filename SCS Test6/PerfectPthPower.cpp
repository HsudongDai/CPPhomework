#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int goal;
    cin >> goal;
    while (goal != 0){
        int max = 0;
        int sil = goal;
        int count = 0;
        for (int i = 2; i <= static_cast<int> (sqrt(goal)); i++){
            while (sil > 1){
                if (sil % i == 0){
                    sil /= i;
                    count++;
                }
                else{
                    count = 0;
                    break;
                }
            }
            if (sil == 1)
                max = i;
        }
        if (max == 0){
            cout << 1 << endl;
        }
        else
            cout << count << endl;
        cin >> goal;
    }

    return 0;
}
