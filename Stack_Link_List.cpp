#include <bits/stdc++.h>
using namespace std;
struct node *top=0;
struct node
{
	int data;
	struct node *next;
	
};

struct node * createNode()
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(node));
	cout<<"input new data"<<endl;
	cin>>newnode->data;
	newnode->next=0;
	return newnode;
}


void push()
{
	struct node * newnode;
	newnode=createNode();
	if(top==0)
	{
		top=newnode;
	}

	else
	{
	   newnode->next=top;
	   top=newnode;
	}

}

void pop()
{
	struct node *temp;
	temp=top;
	if(top==0)
	{
		cout<<"under flow"<<endl;
		return;
	}
	top=top->next;
}

int peak()
{
	return top->data;
}

int main()
{
 int n,x;
 cout<<"how many data push in stack"<<endl;
 cin>>n;
 for (int i = 0; i <n; ++i)
 {
 	push();
 }

 pop();

 x=peak();
 cout<<x<<endl;

}