#include <bits/stdc++.h>
using namespace std;
struct node *front=0,*rear=0;
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
	if(front==0)
	{
		front=rear=newnode;
	}

	else
	{
	   rear->next=newnode;
	   rear=newnode;
	  
	}

}

void pop()
{
	struct node *temp;
	temp=front;
	if(front==0)
	{
		cout<<"under flow"<<endl;
		return;
	}
	front=front->next;
	
}

int peak()
{
	return front->data;
}

int main()
{
 int n,x;
 cout<<"how many data push in queue"<<endl;
 cin>>n;
 for (int i = 0; i <n; ++i)
 {
 	push();
 }

 pop();

 x=peak();
 cout<<x<<endl;

}