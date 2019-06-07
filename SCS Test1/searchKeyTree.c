/*
* @Author: PC
* @Date:   2018-12-13 23:52:03
* @Last Modified by:   PC
* @Last Modified time: 2018-12-14 00:03:42
*/
typedef enum{LEAF, BRANCH} NodeKind;
typedef struct TreeNode {
	NodeKind kind;
	{
		struct 
		{
			KeyType k; Record *infoptr
		}lf; // leaf node
		struct 
		{
			TreeNode * ptr[27]; int num;
		}br;
	}
}TreeNode, *TreeTree;

Record *SearchTree (TreeTree T, KeyType k){
	for (TreeTree p = T, int i = 0;
	p && p -> kind == BRANCH && i 
	< K.num; p = p -> br.ptr[ord(k.ch[i])], 
	++i) {
		if (p && p->kind == LEAF && p -> lf.k == k)
			return p -> lf.infoptr;
		else 
			return NULL;
	}
}