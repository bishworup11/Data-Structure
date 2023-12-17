#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
	
};

struct node *top=0;

void push()
{
	struct node *newnode,*temp;
	newnode=(struct node *) malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->data);
	newnode->next=top;
	top=newnode;
}

void pop()
{
	struct node *temp;
	temp=top;
	if(top==0)
	{
		cout<<"underflow\n";
	}
	else
	{
		top=top->next;
		free(temp);
	}
}

void display()
{
	struct node *temp;
	temp=top;
	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}

	cout<<endl;
}

 void peek()
 {  
 	if(top==0)
 	{
 		cout<<"stack is empty\n ";
 	}

 	else
 	{
 		cout<<top->data<<endl;
 	}

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
