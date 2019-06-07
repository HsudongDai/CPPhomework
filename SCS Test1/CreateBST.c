/*
* @Author: PC
* @Date:   2018-12-13 23:17:46
* @Last Modified by:   PC
* @Last Modified time: 2018-12-13 23:34:09
*/
void createBst(BiTree bst, T K[], int n)
{
	for (int i = 1; i <= n; i++) {
		BiTree p = bst;
		BiTree f = NULL;
		while (p != NULL) {
			if (p -> data < K[i]) {
				f = p;
				p = p -> rLink;
			}
			else if (p -> data > K[i]) {
				f = p;
				p = p -> lLink;
			}
		}
		s = (BiTree)malloc(sizeof (BiNode));
		s -> data = K[i];
		s -> lLink = s -> rLink = NULL;
		if (f == NULL) {
			bst = s;
		}
		else if (s->data < f->data) {
			f -> lLink = s;
		}
		else {
			f - > rLink = s;
		}
	}
}