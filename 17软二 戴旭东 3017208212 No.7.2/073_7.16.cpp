//17软二戴旭东 转专业
#include <iostream>
using std::cout;

int swap(int, int);
void selectedSort(int arr[], int size){
    int minI = 0;

    for(int i = 0; i < size - 1; i++){
        minI = i;
        for(int j = i + 1;j < size; j++){
            if(arr[j] < arr[minI]){
                minI = j;
            }
        }
        if(minI != i){
            int tmp = arr[minI];
            arr[minI] = arr[i];
            arr[i] = tmp;
        }
    }
}


int main()
{
    int test[] = {4,8,6,7,2,9,2,1,5,3};
    selectedSort(test, 10);
    for (int i = 0; i < 10; i++)
        cout << test[i] << " ";
    return 0;
}
