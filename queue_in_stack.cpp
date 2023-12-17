#include<bits/stdc++.h>
using namespace std;
//# define N 5;
const int  N=5;
int s1[N],s2[N];
int top1=-1,top2=-1;
int cnt=0;
void push1(int x)
{
	if(top1==N-1)
	{
		cout<<"Overflow condition\n";
	}
	else
	{
		top1++;
		s1[top1]=x;

	}

}

int pop1()
{
	int a;
	a=s1[top1];
	top1--;
	return a;
}

void push2(int x)
{
	top2++;
	s2[top2]=x;
}

int pop2()
{  int a;
	a=s2[top2];
	top2--;
	return a;
}

void enqueue(int x)
{
	push1(x);
	cnt++;
}

void dequeue()
{
	int a,b;
	if(top1==-1&&top2==-1)
	{
		cout<<"Queue is empty\n";
	}
	else
	{
		for (int i = 0; i < cnt; ++i)
		{
			a=pop1();
			push2(a);
			
		}
		b=pop2();
		cnt--;
		cout<<b<<endl;
		for (int i = 0; i < cnt; ++i)
		{
			a=pop2();
			push1(a);
		}
	}
}

void display()
{
	for (int i = 0; i <=top1; ++i)
	{
		cout<<s1[i]<<" ";
	}
}


int main()
{
	int n,x;

	enqueue(2);
	enqueue(10);
	dequeue();
	enqueue(11);
	enqueue(17);
	display();
	

}