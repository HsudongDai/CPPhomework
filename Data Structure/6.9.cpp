BiTree postfirst(p)
{
    BiTree bt = p;
    if (p == NULL)
        return bt;
    else{
        if (p -> left){
            bt = p;
            p = p -> left;
        }
        else if (p -> right){
            bt = p;
            p = p -> right;
        }
    }
    postfirst(p);
}
