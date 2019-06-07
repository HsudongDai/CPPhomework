/*
* @Author: PC
* @Date:   2018-12-24 20:56:28
* @Last Modified by:   PC
* @Last Modified time: 2018-12-24 20:59:42
*/
typedef struct 
{
	int key;
	T info;
}RecType;

void countSort(RecType a[], RecType b[], int n)
{
	for (int i = 0; i < n; i++){
		int cnt = 0;
		for (int j = 0; j < n; j++){
			if (a[i].key > b[j].key)
				cnt++;
			b[cnt] = a[i];
		}
	}
}