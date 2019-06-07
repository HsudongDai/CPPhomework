/*
* @Author: PC
* @Date:   2018-12-13 23:43:19
* @Last Modified by:   PC
* @Last Modified time: 2018-12-13 23:48:50
*/
void ConstructBST(BiTree t, T A[], int n)
{
	for (i = 1; i <= n; i++){
		BiTree p = t; f = NULL;
		while (p != NULL){
			if (p -> data < A[i]){
				f = p;
				p = p -> lLink;
			}
			else if (p -> data > A[i]){
				f = p;
				p = p -> rLink;
			}
			s = (BiTree) malloc (sizeof (BiNode));
			s -> data = A[i];
			s -> lLink = s -> rLink = NULL;
			if (f == NULL)
				t = f;
			else if (s -> data < f -> data)
				f -> lLink = s;
			else
				f -> rLink = s;
		}
	}
}