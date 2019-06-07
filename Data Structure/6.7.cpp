Bitree LastNode(BiTree bt)
{
    BiTree p = bt;
    if (p == NULL)
        return 0;
    else while (p){
        if (p -> rchild)
            p = p -> rchild;
        else if (p -> lchild)
            p = p -> lchild;
        else
            return p;
    }
}
