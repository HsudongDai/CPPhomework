/*
* @Author: PC
* @Date:   2018-12-24 21:11:54
* @Last Modified by:   PC
* @Last Modified time: 2018-12-24 21:25:44
*/
typedef struct 
{
	int key;
	int next;
}SLRecType;
SLRecType R[n+1];

typedef struct 
{
	int t;
	int fir;
	int end;
}SLQueue;
SLQueue B[10];

int radixSort(SLRecType R[], int n){
	for (int i = 0; i < n; i++){
		R[i].next = i + 1;
	}
	R[n].next = -1;
	p = 1;
	for (int j = 0; j <= 9; i++){
		B[i].fir = 1;
		B[i].end = -1;
	}
	while (p != -1){
		int k = R[p].key;
		if (B[k].fir == -1){
			B[k].fir = p;
		}
		else{
			R[B[k].e].next = p;
		}
		B[k].e = p;
		p = R[p].next;
	}
	int cnt = 0;
	while (B[cnt].fir == -1){
		cnt++;
	}
	int tik = B[i].end;
	int pic = B[i].fir;
	while (cnt < 9){
		cnt++;
		if (B[cnt],fir != -1){
			R[tik].next = B[cnt].fir;
			tik = B[cnt].end;
		}
		R[tik].next = -1;
	}
	return p;
}