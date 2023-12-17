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

int  searchdata(struct node *head,int p)
{
	struct node *temp,*newnode,*Nextnode;
	int i=1;
	temp=head;

	
		while(p!=temp->data)
		{
			temp=temp->next;
			i++;        

		}

	

		
	

	return i;
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
	int n,x,p;
	cin>>n;
	struct node *head;
	head=createLinklist(n);
	cout<<"input the number which you want search"<<endl;
	cin>>x;
	p=searchdata(head,x);

	cout<<"Position is : "<<p<<endl;

	

}