#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /*char * const name = "Dallas";
    cout << name << endl;
    cout << *name << endl;
    cout << *(name + 1) << endl;
    return 0;
    */
    int list[] = {3,4,2,5,6,1};
    cout << *min_element(list, list + 2) << endl;
    cout << *max_element(list, list + 2) << endl;
    cout << *find(list, list + 6, 2) << endl;
    cout << find(list, list + 6, 20) - list << endl;
    sort(list, list + 6);
    cout << list[5] << endl;
}
