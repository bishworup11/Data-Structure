#include<bits/stdc++.h>
using namespace std;
//# define N 5;
const int  N=5;
int queues[N];
int front=-1,rear=-1;
void enqueue_front( int x)
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

	else if(front==0)
	{
		front=N-1;
		queues[front]=x;

	}
	else
	{
		front--;
		queues[front]=x;
	}
	


}
void enqueue_rear( int x)
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

void dequeue_front()
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

void dequeue_rear()
{
	if(front==-1&&rear==-1)
	{
		cout<<"Underflow\n";
	}

	else if(front==rear)
	{
		front=rear=-1;
	}

	else if(rear==0)
	{
		rear=N-1;
	}
	else
	{
		rear--;
	}
}



// void peek()
// {
// 	if(front==-1&&rear==-1)
// 	{
// 		cout<<"Queue is empty\n";
// 	}

// 	else
// 		cout<<queues[front]<<endl;
// }

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
		cout<<queues[i]<<" ";
	}

	cout<<"\n";
}


int main()
{
	int n,x;

	enqueue_front(2);
	enqueue_front(5);
	enqueue_rear(-1);
	enqueue_rear(0);
	enqueue_front(7);
	enqueue_front(4);
	display();
	dequeue_front();
	dequeue_rear();
	dequeue_front();
	display();
	

}
 