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
		int i=front;
		while(rear!=i)
		{
			cout<<queues[i]<<" ";
			i=(i+1)%N;

		}
	}

	cout<<"\n";
}


int main()
{
	int n,x;

	enqueue(2);
	enqueue(10);
	enqueue(11);
	enqueue(17);
	enqueue(98);
	dequeue();
	enqueue(0);
	display();
	

}
 