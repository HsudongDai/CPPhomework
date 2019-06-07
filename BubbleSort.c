/*
* @Author: PC
* @Date:   2018-12-24 20:19:01
* @Last Modified by:   PC
* @Last Modified time: 2018-12-24 20:30:40
*/
void BubbleSort(int a[], int n) {
	int change = 1, low = 0, high = n - 1;
	while (low < high && change) {
		change = 0;
		for (int i = low; i < high; i++) {
			if (a[i] > a[i + 1]) {
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				change = 1;
			}
		}
		high--;
		for (int j = high; j > low; j--) {
			if (a[j] < a[j - 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				change = 1;
			}
			low++;
		}
	}
}//while