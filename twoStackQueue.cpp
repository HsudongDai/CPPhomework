#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

class Queue
{
private:
    stack<int> s1;
    stack<int> s2;
public:
    //���
    void Push(const int& val);
    //����
    void Pop();
    //���ض���Ԫ��
    int& Front();
    //���ض�βԪ��
    int& Back();
    //�ж϶����Ƿ�Ϊ��
    bool Empty();
    //���ض��д�С
    int Size();
};


----------------------------------------
------------- queue.cpp ----------------

#include "queue.h"

//���
void Queue::Push(const int& val)
{
    //ջs1�����еĶ�β��s2��Ϊ���еĶ�ͷ
    s1.push(val);
    cout<<val<<" ";
}

//����
void Queue::Pop()
{
    while (!s1.empty())
    {
        int val = s1.top();
        s2.push(val);
        s1.pop();
    }
    s2.pop();
}

//���ض���Ԫ��
int& Queue::Front()
{
    while (!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }

    int temp = s2.top();
    while (!s2.empty())
    {
        int var = s2.top();
        s1.push(var);
        s2.pop();
    }
    return temp;
}

//���ض�βԪ��
int& Queue::Back()
{
    return s1.top();
}

//�ж϶����Ƿ�Ϊ��
bool Queue::Empty()
{
    if (s1.empty()&&s2.empty())
    {
        return true;
    }
    else
        return false;
}

//���ض��д�С
int Queue::Size()
{
    return s1.size()+s2.size();
}



--------------------------------------
--------------- test.cpp -------------
#include "queue.h"
void test()
{
    Queue q1;
    cout<<"����в���:"<<endl;
    cout<<"����Ķ���Ԫ�طֱ��ǣ�"<<endl;
    q1.Push(1);
    q1.Push(2);
    q1.Push(3);
    q1.Push(4);
    q1.Push(5);
    q1.Push(6);
    cout<<"�ж϶����Ƿ�Ϊ�գ�"<<endl;
    if (q1.Empty())
    {
        cout<<"empty."<<endl;
    }
    else
    {
        cout<<"not empty."<<endl;
    }
    cout<<"��ȡ��ͷԪ�أ�"<<endl;
    cout<<q1.Front()<<endl;
    cout<<"��ȡ��βԪ��:"<<endl;
    cout<<q1.Back()<<endl;
    cout<<"��ȡ���еĴ�С������"<<endl;
    cout<<q1.Size()<<endl;
    printf("�����в���:\n");
    q1.Pop();
}
int main()
{
    test();
    system("pause");
    return 0;
}
