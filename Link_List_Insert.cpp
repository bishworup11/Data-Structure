#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};

struct node * createNode()
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));

	cin>>newnode->data;
	newnode->next=0;
	return newnode;
}

struct node * createLinklist(int n)
{
  struct node *head=0,*temp,*newnode;
  	cout<<"input new data"<<endl;
	for (int i = 0; i <n; ++i)
	{
      newnode=createNode();
      if(head==0)
      {
      	head=temp=newnode;
      }
      else
      {
      	temp->next=newnode;
      	temp=newnode;

      }

	}
	return head;
}

struct node * insertdata(struct node *head,int p)
{
	struct node *temp,*newnode;
	int i=1;
	temp=head;
   cout<<"input new data"<<endl;
	newnode=createNode();
	if(p==1)
	{
		newnode->next=head;
		head=newnode;

	}
	else
	{
		while(i<p-1)
		{
			temp=temp->next;
			i++;        

		}

		newnode->next=temp->next;
		temp->next=newnode;

	}

	return head;
}


void display(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;

	}
	
}

int main()
{

	cout<<" input number of data you want insert "<<endl;
	int n,p;
	cin>>n;
	struct node *head;
	head=createLinklist(n);
	cout<<"input the position which you want insert data"<<endl;
	cin>>p;
	head=insertdata(head,p);

	display(head);

	

}