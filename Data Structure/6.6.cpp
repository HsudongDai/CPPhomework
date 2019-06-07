typedef struct{
    BiTree t;
    int tag;
    //tag == 0, lchild is viewed
    //tag == 1, rchild is viewed
}stack;

void search(BiTree bt, ElemType x)
{
    stack s[50];
    top = 0;
    while (bt != NULL && bt->data != x){
        s[++top].t = bt;
        s[top].tag = 0;
        bt = bt->lchild;
    }
    if (bt -> data == x){
        printf("All the values of its ancestors: ");
        for (int i = 0; i <= top; i++){
            printf("%d", s[i].t -> data);
        }
        exit(0);
    }
    while (top != 0 && s[top].tag == 1)
        top--;
    if (top != 0)
    {
        s[top].tag = 1;
        bt = s[top].t->rchild;
    }
}
