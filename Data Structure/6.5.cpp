#include<iostream>
#include<stack>
#include<queue>
using namespace std;
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

void CreateTree(BiTree &T)
{
    char ch;
    cin>>ch;
    if(ch=='#') T=NULL;
    else
    {
        T=(BiTree)malloc(sizeof(BiTNode));
        if(!T)  cout<<"生成结点错误！"<<endl;
        T->data=ch;
        CreateTree(T->lchild);
        CreateTree(T->rchild);
    }
}

//法1：后序遍历，结点最大栈长即为树的高度
int BT_high(BiTree T)
{
    BiTree p=T,r=NULL;
    int max=0;                                     //树高
    stack<BiTree> s;
    while(p||!s.empty())
    {
        if(p!=NULL)
        {
            s.push(p);
            p=p->lchild;
        }
        else
        {
            p=s.top();
            if(p->rchild!=NULL && p->rchild!=r)
                p=p->rchild;
            else
            {
                if(s.size()>max) max=s.size();//最大层次即为高度
                r=p;
                s.pop();
                p=NULL;
            }
        }
    }
    return max;
}

//法2：层次遍历，层次即为高度
int getHeight(BiTree *T)
{
    if (T == NULL)
        return 0;
    else{
        BiTree p = T, Q[100];
        int level = 0;
        int front = -1, rear = -1;
        int last = 0;
        Q[++rear] = p;
        while (front < rear)
        {
            p = Q[++front];
            if (p -> lchild){
                Q[++rear] = p -> lchild;
            }
            if (p -> rchild){
                Q[++rear] = p -> rchild;
            }
            if (front == last){
                last = rear;
                ++level;
            }
        }
    }
    return level;
}

//法3：递归求树高1
int max1=0;//树高
int BT_depth1(BiTree T,int depth)
{
    if(T)
    {
        if(T->lchild)
            BT_depth1(T->lchild,depth+1);
        if(T->rchild)
            BT_depth1(T->rchild,depth+1);
    }
    if(depth>max1)
        max1=depth;
    return depth;
}

//法3：递归求树高2
int Height (BiTree T)
{
    if(T==NULL) return 0;
    else
    {
        int m = Height ( T->lchild );
        int n = Height(T->rchild);
        return (m > n) ? (m+1) : (n+1);
    }
}
int GetMaxWidth(BinaryTree pointer){
  int width[10];//加入这棵树的最大高度不超过10
  int maxWidth=0;
  int floor=1;
  if(pointer){
    if(floor==1){//如果访问的是根节点的话，第一层节点++;
      width[floor]++;
      floor++;
      if(pointer->leftChild)
        width[floor]++;
      if(pointer->rightChild)
        width[floor]++;
    }else{
      floor++;
      if(pointer->leftChild)
        width[floor]++;
      if(pointer->rightChild)
        width[floor]++;
    }
    if(maxWidth<width[floor])
      maxWidth=width[floor];
    GetMaxWidth(pointer->leftChild);
    floor--;//记得退回一层，否则会出错。因为已经Get过了，所以要及时的返回。
    GetMaxWidth(pointer->rightChild);
  }
  return maxWidth;
}

int getMaxWidth(BiTree *T)
{
    if (T == NULL)
        return 0;
    Queue<BiTree> que;
    int maxWidth = 1;
    que.push_back(T);
    while (true){
        int size = que.size();
        if (size == 0)
            break;
        }
        while (size > 0){
            BiTree node = que.pop_front();
            size--;
            if (node -> lchild)
                que.push_back(node -> lchild);
            if (node -> rchild)
                que.push_back(node -> rchild);
            if (que.size() > maxWidth)
                maxWidth = que.size();
        }
        return maxWidth;
}
int main()
{
    BiTree T=NULL;
    CreateTree(T);
    cout<<"后序遍历求树高："<<endl;
    cout<<BT_high(T)<<endl;
    cout<<"层次遍历求树高："<<endl;
    cout<<BT_level_depth(T)<<endl;
    cout<<"递归求树高1："<<endl;
    BT_depth1(T,1);
    cout<<max1<<endl;
    cout<<"递归求树高2："<<endl;
    cout<<Height(T)<<endl;
    return 0;
}
