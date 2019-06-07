typedef struct BNTree{
    char data;
    struct BNTree * lchild;
    struct BNTree * rchild;
}Node, *BNTree;

void CreatBinTree(BNTree &b)
{
    char ch1, ch2;
    scanf("%c", "%c", ch1, ch2);
    if (ch1 == '')
        b = nullptr;
    else{
        if (!(BNTree)malloc(sizeof(Node)))
            exit(0);
        b -> data = ch1;
        CreatBinTree(b->lchild);
        CreatBinTree(b->rchild);
    }
}

bool completeBinTree(BNTree T)
{
    if (T == nullptr)
        return true;
    LinkQueue *Q;
    QueueInit(Q);
    push(Q, T);
    while (1){
        Node *t = get(Q);
        if (t == NULL)
            break;
        pop(Q);
        push(Q, t->lchild);
        push(Q, t->rchild);
    }
    while (!isEmpty(Q)){
        Node *t = get(Q);
        if (t != NULL)
            return false;
        pop(Q);
    }
    return false;
}
