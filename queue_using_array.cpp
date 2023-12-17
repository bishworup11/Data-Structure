#include<bits/stdc++.h>
using namespace std;
//# define N 5;
const int  N=5;
int queues[N];
int front=-1,rear=-1;
void enqueue( int x)
{
	if((rear+1)%N==front)
	{
		cout<<"Overflow\n";

	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queues[rear]=x;

	}

	else
	{
		rear=(rear+1)%N;
		queues[rear]=x;

	}



}

void dequeue()
{
	if(front==-1&&rear==-1)
	{
		cout<<"Underflow\n";
	}

	else if(front==rear)
	{
		front=rear=-1;
	}

	else
	{
		front=(front+1)%N;
	}
}



void peek()
{
	if(front==-1&&rear==-1)
	{
		cout<<"Queue is empty\n";
	}

	else
		cout<<queues[front]<<endl;
}

void display()
{
	if(front==-1&&rear==-1)
	{
		cout<<"Queue is empty\n";
	}

	else
	{
		for (int i = front;; i=((i+1)%N))
		{
			cout<<queues[i]<<" ";
			if(i==rear)
                break;
		}
	}

	cout<<"\n";
}


int main()
{
	int n,x;

	enqueue(2);
	cout<<front<<" "<<rear<<endl;
	enqueue(10);
	cout<<front<<" "<<rear<<endl;
	dequeue();
	cout<<front<<" "<<rear<<endl;
	enqueue(11);
	cout<<front<<" "<<rear<<endl;
	peek();
	enqueue(17);
	cout<<front<<" "<<rear<<endl;
	//display();
	enqueue(11);
	cout<<front<<" "<<rear<<endl;
	enqueue(11);
	cout<<front<<" "<<rear<<endl;

    display();



}
