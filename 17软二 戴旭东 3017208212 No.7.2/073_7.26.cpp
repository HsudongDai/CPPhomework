//17软二戴旭东 转专业
#include <iostream>
using std::cout;
using std::cin;

void mergeArrays(const int[], int, const int [], int);

int main()
{
    /*int size1 = 4, size2 = 4;
    int tep2[4] = {4,7,8,9};
    int tep1[4] = {1,3,6,10};*/
    int size1 = 0;
    int size2 = 0;
    cout << "Please enter your 1st array.\n";
    cout << "Enter its size: ";
    std::cin >> size1;
    int * tep1 = new int[size1];
    for (int i = 0; i < size1 ; i++){
        cout << "No." << i+1 << ": ";
        cin >> tep1[i];
    }
    cout << "Please enter your 2nd array.\n";
    cout << "Enter its size: ";
    cin >> size2;
    int * tep2 = new int[size2];
    for (int i = 0; i < size2 ; i++){
        cout << "No." << i+1 << ": ";
        cin >> tep2[i];
    }
    mergeArrays(tep1, size1, tep2, size2);
    delete [] tep1;
    delete [] tep2;

    return 0;
}

void mergeArrays(const int a1[] , int s1, const int a2[], int s2)
{
    int arr[s1 + s2 + 1];
    int cnt = 0;
    int loc1 = 0;
    int loc2 = 0;
    while (loc1 < s1  && loc2 < s2 ){
        if (a1[loc1] <= a2[loc2]){
            arr[cnt] = a1[loc1];
            ++loc1;
            ++cnt;
        }
        else{
            arr[cnt] = a2[loc2];
            ++loc2;
            ++cnt;
        }
    }
    //cout << loc1 << " " << loc2 << "\n";
    while(loc1 < s1 ){
        arr[cnt] = a1[loc1];
        ++cnt;
        ++loc1;
    }
    while (loc2 < s2 ){
        arr[cnt] = a2[loc2];
        ++cnt;
        ++loc2;
    }
    //cout << loc1 << " " << loc2 << "\n";
    for (int k = 0; k < s1 + s2 ; k++){
        cout << arr[k] << " ";
    }
}
