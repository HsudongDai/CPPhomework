#include <iostream>
#include <stack>
using namespace std;

void PushToButtom(stack<int> *s,int o)
{
	if(s->empty())
	{
		s->push(o);
		return;
	}
	else
	{
		int o2 = s->top();
		s->pop();
		PushToButtom(s,o);
		s->push(o2);
	}
}

void Reverse(stack<int> *s)
{
	if(s->size() == 1) return ;
	int o = s->top();
	s->pop();
	Reverse(s);
	PushToButtom(s,o);
}

int main()
{
	stack<int> *s =new stack<int>;
	s->push(1);
	s->push(2);
	s->push(3);
	s->push(4);
	s->push(5);

	Reverse(s);
	while(!s->empty())
	{
		cout << s->top() << " ";
		s->pop();
	}

}
