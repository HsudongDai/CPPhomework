// DoubleQueue.cpp : �������̨Ӧ�ó������ڵ㡣
//


//��Ϊѭ������Ϊ�˱�����֡�����������ԣ�topָ������ָ��һ����Ԫ�أ�������ǰλ�õ�ǰһ��λ�ã�����rearָ��ǰλ�á�
#include <cassert>
#include <iostream>
#include <assert.h>
#include <iomanip>
using namespace std;

template <typename T>
class DoubleQueue
{
private:
	int end1,end2;  //end1,end2Ϊ�����˵�,end1�൱�ڶ����е�rear,end2�൱��top��
	T *data;  //���е�ֵ
	int size;//���еĴ�С
public:
	DoubleQueue(int sz = 10);
	~DoubleQueue(){delete[] data;}
	void EnQueue(T item,int end);  //�Ӷ����в���Ԫ��
	void DelQueue(int end);  //�Ӷ�����ɾ��Ԫ��
	bool IsEmpty(){ return end1 == end2;}
	bool IsFull(){ return (end1+1)%size == end2;}
	void List(int end);  //�г�����������Ԫ��
};

template <typename T>
DoubleQueue<T>::DoubleQueue(int sz):end1(0),end2(0),size(sz)
{
	data = new T[this->size];
	assert(data!=0);//���data����ָ����0��Ԫ�أ�����ԡ�
}

//ѭ��˫�˶��еĲ������
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

//ѭ��˫�˶��е�ɾ������
//ɾ��Ԫ�ص�ʱ��ֻ��Ҫָ�����Ķ�ɾ��
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

//ѭ��˫�˶��е��������
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

//ѭ��˫�˶��еĲ���
int main()
{
	DoubleQueue<int> dq;
	//�����end1�в���Ԫ��
	dq.EnQueue(2,1);
	dq.EnQueue(3,1);
	dq.EnQueue(4,1);
	dq.EnQueue(5,1);

	cout<<"����������end1����Ԫ�غ�Ľ����"<<endl;
	dq.List(1);

	cout<<"ɾ�����е�end1�������Ԫ�غ�Ķ��У�"<<endl;
	dq.DelQueue(1);
	dq.DelQueue(1);
	dq.List(1);

		//�����end1�в���Ԫ��
	dq.EnQueue(6,2);
	dq.EnQueue(7,2);
	dq.EnQueue(8,2);
	dq.EnQueue(9,2);

	cout<<"����������end2����Ԫ�غ�Ľ����"<<endl;
	dq.List(2);

	cout<<"ɾ�����е�end2�������Ԫ�غ�Ķ��У�"<<endl;
	dq.DelQueue(2);
	dq.DelQueue(2);
	dq.List(2);

	return 0;
}
