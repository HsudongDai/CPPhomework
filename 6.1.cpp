typedef struct Node
{
    char data;
    struct Node * lchild;
    struct Node * rchild;
}BTNode;

BTNode* CreatExpressionTree(char data[],int num)
{
    BTNode *p=NULL;
    int i=0;
    BTNode* Stack[20];
    int top=-1;
    for(i=0;i<num;i++)
    {
        p=(BTNode *)malloc(sizeof(BTNode));
        p->rchild=p->lchild=NULL;
        p->data=data[i];
        if(p->data<='z' && p->data>='a')
        {
            Stack[++top]=p; //p->data为小写字母
        }
        else {
            p->rchild=Stack[top--];
            p->lchild=Stack[top--];
            Stack[++top]=p;
        }
    }
    return Stack[0];
}

int Precede(char a, char b)
{
    switch(a)
    {
         case '+' : case '-':
             if (b == '+' || b == '-')
                return (0);
             else
                return (-1);
             break;
         case '*' : case '/':
            if (b == '*' || b == '/')
                return (0);
            else
                return (-1);
    }

}

void InOrderOut(BTNode * bt)
{
    int bracket;
    if (bt != nullptr){
        if (bt -> lchild != nullptr){
            bracket = Precede(bt -> data, bt -> lchild -> data);
            if (bracket == 1){
                printf("(");
            }
            InOrderOut(bt -> lchild);
            if (bracket == 1){
                printf(")");
            }
        }
        printf("%c", bt -> data);
        if (bt -> rchild != nullptr){
            bracket = Precede(bt -> data, bt -> rchild -> data);
                 printf("(");
            }
            InOrderOut(bt -> rchild);
            if (bracket == 1){
                printf(")");
            }
        }
}

int main()
{
    BTNode * root = nullptr;
    char data[] = {"ab/cd*+ef/+g+"};
    int num;
    num = strlen(data);
    root = CreatExpressionTree(root);
    InOrderOut(root);
    return 0;
}
