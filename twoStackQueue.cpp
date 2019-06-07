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
    //入队
    void Push(const int& val);
    //出队
    void Pop();
    //返回队首元素
    int& Front();
    //返回队尾元素
    int& Back();
    //判断队列是否为空
    bool Empty();
    //返回队列大小
    int Size();
};


----------------------------------------
------------- queue.cpp ----------------

#include "queue.h"

//入队
void Queue::Push(const int& val)
{
    //栈s1作队列的队尾，s2作为队列的队头
    s1.push(val);
    cout<<val<<" ";
}

//出队
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

//返回队首元素
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

//返回队尾元素
int& Queue::Back()
{
    return s1.top();
}

//判断队列是否为空
bool Queue::Empty()
{
    if (s1.empty()&&s2.empty())
    {
        return true;
    }
    else
        return false;
}

//返回队列大小
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
    cout<<"入队列操作:"<<endl;
    cout<<"插入的队列元素分别是："<<endl;
    q1.Push(1);
    q1.Push(2);
    q1.Push(3);
    q1.Push(4);
    q1.Push(5);
    q1.Push(6);
    cout<<"判断队列是否为空！"<<endl;
    if (q1.Empty())
    {
        cout<<"empty."<<endl;
    }
    else
    {
        cout<<"not empty."<<endl;
    }
    cout<<"获取队头元素："<<endl;
    cout<<q1.Front()<<endl;
    cout<<"获取队尾元素:"<<endl;
    cout<<q1.Back()<<endl;
    cout<<"获取队列的大小操作："<<endl;
    cout<<q1.Size()<<endl;
    printf("出队列操作:\n");
    q1.Pop();
}
int main()
{
    test();
    system("pause");
    return 0;
}
