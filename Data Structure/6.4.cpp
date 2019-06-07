typedef struct BiTree
{
    char datum;
    struct BiTree *lchild;
    struct BiTree *rchild;
}BiNode, *BiTree;

int getDepth(BiTree *T)
{
    int rDepth = 0, lDepth = 0;
    if (T = NULL)
        return 0;
    else{
        lDepth = getDepth(T -> lchild);
        rDepth = getDepth(T -> rchild);
    }
    return lDepth < rDepth ? rDepth + 1: lDepth +1;
}
