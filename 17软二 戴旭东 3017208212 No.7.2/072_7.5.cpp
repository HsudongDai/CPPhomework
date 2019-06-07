//17软二戴旭东 转专业
#include <iostream>
#include <cstdlib>

int compare(const void *a, const void *b){
    return (*(int *)a - *(int *)b);
}
int binary_research(int arr[],int left,int right,int element);
using std::cout;

int main()
{
    int hold[11];
       // = {2,6,4,9,2,5,3,7,9,10};
    cout <<"Please enter 10 numbers.\n";
    for (int i = 0; i < 10; i++){
        cout << "No." << i+1 << ": ";
        std::cin >> hold[i];
    }
    qsort(hold, 10, sizeof(int), compare);
    cout << "\n";
    /*for (int i = 0; i < 9; i++)
        cout << hold[i] << " ";
    cout << std::endl;
    */

    int result[10];
    result[0] = hold[0];
    int cnt = 1;
    for (int i = 1; i < 10; i++){
        if (hold[i] != hold[i-1]){
            result[cnt] = hold[i];
            ++cnt;
        }
    }
    for (int j = 0; j < cnt ; j++)
        cout << result[j] << " ";
    cout << "\n";
    //cout << binary_research(result, 0, cnt, 5) + 1;

    return 0;
}

int binary_research(int arr[],int left,int right,int element)
{
	while(left <= right)
	{
		int mid = (left+right)/2;
		if(arr[mid]>element)
		{
			right = mid - 1;
		}
		else if(arr[mid]<element)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
