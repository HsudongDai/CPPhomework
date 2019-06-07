#include <bits/stdc++.h>
#define OK 1
#define ERROR 0
using namespace std;
//孩子-兄弟表示法
typedef srruct CSNode
{
    char data;
    struct CSNode * lchild;
    struct CSNode * rsibiling;
}CSNode, *CSTree;

int CreateTree_CS(CSTree &T){
	char ch;
	scanf("%c",&ch);
	if(ch=='^'){
		T=NULL;
	}
	else{
		T=(CSTree)malloc(sizeof(CSNode));
		if(!T) exit(0);
		T->data=ch;
		CreateTree_CS(T->firstchild);
		CreateTree_CS(T->nextsibling);
	}
	return OK;
}



//树的度
int Algo_1(CSTree T){
	int i,j,max,tmp;
	CSTree Q[100];//临时存放各结点
	i=j=0;
	max=-1;
	if(T)
	{
		max=0;
		Q[j++]=T->firstchild;

		while(i<j)//按层序遍历
		{
			tmp=0;
			while(Q[i])
			{
				tmp++;
				//存储有孩子的结点
				if(Q[i]->firstchild) Q[j++]=Q[i]->firstchild;
				Q[i]=Q[i]->nextsibling;//统计本层结点数
			}
			if(tmp>max) max=tmp;
			i++;
		}
	}
	return max;
}


//树的深度
int Algo_2(CSTree T){
	int row,max;
	stack<CSTree> S;
	CSTree tmp;
	row=0;
	if(T)
	{
		S.push(T);
		row=max=1;

		while(!S.empty())
		{
			tmp=S.top();
			while(tmp->firstchild)
			{
				S.push(tmp->firstchild);
				++max;
				if(row<max) row=max;
				tmp=S.top();
			}
			tmp=S.top();
			S.pop();
			if(tmp->nextsibling)
				S.push(tmp->nextsibling);
			else{
				while(!S.empty())
				{
					tmp=S.top();
					S.pop();
					--max;

					if(tmp->nextsibling){
						S.push(tmp->nextsibling);
						break;
					}
				}
			}
		}
	}
	return row;
}

int countLeaves(CSTree T)
{
    if (T){
        if (!T->lchild) {
            cout << T->data << ' ';
            return 1 + countLeaves(T->rsibiling);
        }
        else
            return countLeaves(T->lchild) + countLeaves(T->rsibiling);
    }
    else
        return 0;
}
