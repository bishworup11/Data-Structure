#include<bits/stdc++.h>
using namespace std;
//# define N 5;
const int  N=5;
struct node
{ int data;
	struct node *next;
	
};

struct node *front=0, *rear=0;
void enqueue( int x)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=x;
	newnode->next=0;
	if(front==0&&rear==0)
	{
		front=rear=newnode;
	}
    
    else
    {
    	rear->next=newnode;
    	rear=newnode;
    }


}

void dequeue()
{
	struct node *temp;
	if(front==0&&rear==0)
	{
		cout<<"Underflow\n";
	}

	else if(front==rear)
	{
		temp=front;
		temp=rear=0;
	}

	else
	{
		temp=front;
		front=front->next;

		free(temp);
		
	}
}



void peek()
{
	if(front==0&&rear==0)
	{
		cout<<"Queue is empty\n";
	}

	else
		cout<<front->data<<endl;
}

void display()
{
	struct node *temp;

	if(front==0&&rear==0)
	{
		cout<<"Queue is empty\n";
	}

	else
	{
		temp=front;
		while(temp!=0)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}

	

	cout<<"\n";
}


int main()
{
	int n,x;

	enqueue(2);
	enqueue(10);
	dequeue();
	enqueue(11);
	peek();
	enqueue(17);
	display();
	

}
