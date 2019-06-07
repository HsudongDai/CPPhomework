// DoubleQueue.cpp : 定义控制台应用程序的入口点。
//


//因为循环队列为了避免出现“假溢出”所以，top指针总是指向一个空元素（即：当前位置的前一个位置），而rear指向当前位置。
#include <cassert>
#include <iostream>
#include <assert.h>
#include <iomanip>
using namespace std;

template <typename T>
class DoubleQueue
{
private:
	int end1,end2;  //end1,end2为两个端点,end1相当于队列中的rear,end2相当于top。
	T *data;  //队列的值
	int size;//队列的大小
public:
	DoubleQueue(int sz = 10);
	~DoubleQueue(){delete[] data;}
	void EnQueue(T item,int end);  //从队列中插入元素
	void DelQueue(int end);  //从队列中删除元素
	bool IsEmpty(){ return end1 == end2;}
	bool IsFull(){ return (end1+1)%size == end2;}
	void List(int end);  //列出队列中所有元素
};

template <typename T>
DoubleQueue<T>::DoubleQueue(int sz):end1(0),end2(0),size(sz)
{
	data = new T[this->size];
	assert(data!=0);//如果data不是指到第0个元素，则断言。
}

//循环双端队列的插入操作
template <typename T>
void DoubleQueue<T>::EnQueue(T item,int end)
{
	assert( !IsFull() );
	if( 1 == end )
	{
		end1 = (end1+1)%size;
		data[end1] = item;
	}
	else
	{
		data[end2] = item;
		end2 = (end2-1+size)%size;
	}
}

//循环双端队列的删除操作
//删除元素的时候，只需要指定从哪端删除
template<typename T>
void DoubleQueue<T>::DelQueue(int end)
{
	assert( !IsEmpty() );
	if( 1 == end )
	{
		end1 = (end1-1+size)%size;
	}
	else
	{
		end2 = (end2+1)%size;
	}
}

//循环双端队列的输出操作
template<typename T>
void DoubleQueue<T>::List(int end)
{
	if( 1 == end )
	{
		for(int p = end1; p != end2; p = (p-1+size)%size )
			cout<<setw(3)<<data[p];
		cout<<endl;
	}
	else
	{
		for(int p = (end2+1)%size; p != end1; p = (p+1)%size )
			cout<<setw(3)<<data[p];
		cout<<endl;
	}
}

//循环双端队列的测试
int main()
{
	DoubleQueue<int> dq;
	//向队列end1中插入元素
	dq.EnQueue(2,1);
	dq.EnQueue(3,1);
	dq.EnQueue(4,1);
	dq.EnQueue(5,1);

	cout<<"输出向队列中end1插入元素后的结果："<<endl;
	dq.List(1);

	cout<<"删除队列的end1最后两个元素后的队列："<<endl;
	dq.DelQueue(1);
	dq.DelQueue(1);
	dq.List(1);

		//向队列end1中插入元素
	dq.EnQueue(6,2);
	dq.EnQueue(7,2);
	dq.EnQueue(8,2);
	dq.EnQueue(9,2);

	cout<<"输出向队列中end2插入元素后的结果："<<endl;
	dq.List(2);

	cout<<"删除队列的end2最后两个元素后的队列："<<endl;
	dq.DelQueue(2);
	dq.DelQueue(2);
	dq.List(2);

	return 0;
}
