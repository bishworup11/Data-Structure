#include<bits/stdc++.h>
using namespace std;
const int  N=5;
int stacks[100];
int top=-1;
void push()
{

	if(top==N-1)
	{
		cout<<"Overflow"<<endl;

	}
	else
	{
		top++;
		cout<<"Enter data\n";
		cin>>stacks[top];
	}


}

void pop()
{
	if(top<0)
	{
		cout<<"underflow\n";
	}
	else
	{
		top--;
	}
}

void peek()
{
	if(top==-1)
	{
		cout<<"there are no data\n";
	}
	else
	{
	  cout<<stacks[top]<<endl;
	}
}

void display()
{
	for(int i=top;i>=0;i--)
	{
		cout<<stacks[i]<<" ";
	}
	cout<<"\n";
}


int main()
{
	int n,x;
	cout<<"how many data input in stack\n";
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		push();
	}
	display();
	pop();
	display();
    peek();

}
