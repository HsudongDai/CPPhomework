void InvertLevel(BiTree bt)
{
    if (bt != NULL){
        StackInit(S);
        QueueInit(Q);
        QueueIn(Q, bt);
        while (!QueueEmpty(Q)){
            p = QueueOut(Q);
            StackPush(S, p);
            if (p -> lchild)
                QueueIn(Q, p->lchild);
            if (p -> rchild)
                QueueIn(Q, p -> rchild);
        }
        while (!StackEmpty(S)){
            p = pop(S);
            printf(p -> data);
        }
    }
}
