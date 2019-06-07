#define true 1
#define false 0

typedef struct node
{
	T data;
	struct node * lLink, *rlink;
} *BTree;

void judgeBST(BTree t, int flag)
{
	if (t != NULL && flag)
	{
		judgeBST(t -> lLink, flag);
		if (pre == NULL) //pre为前驱指针
			pre = t;
		else if (pre -> data < t -> data)
			pre = t;
		else
			flag = false;
		judgeBST(t -> rlink, flag);
	}
}