#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *prev;
	
};
struct node *head,*tail;

struct node * create_node()
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	printf("Enter data\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	return newnode;
}

void dislpay()
{
	struct node *temp;
	temp=head;

	while(temp!=0)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
void push_front()
{
	struct node *temp,*newnode;
	temp=head;
	newnode=create_node();
	newnode->next=head;
	head=newnode;


}

void push_back()
{
	struct node *temp,*newnode;
	newnode=create_node();
	tail->next=newnode;
	newnode->prev=tail;
	tail=newnode;

}

void insert_at_pos()
{
	struct node *temp,*newnode;
	newnode=create_node();
	int i=1,p;
	printf("insert position \n");
	cin>>p;
	p--;
   
   temp=head;

	if(p==0)
	{
	newnode->next=head;
	head=newnode;
	}
	else
	{
		while(i<p)
		{
			temp=temp->next;
			i++;

		}
		newnode->next=temp->next;
		newnode->prev=temp;
		temp->next=newnode;

	}


}
void front_pop()
{
	struct node *temp;
	temp=head;
	head=head->next;
	head->prev=0;
	free(temp);
}
void back_pop()
{
	struct node *temp;
	temp=tail;
	tail=tail->prev;
	tail->next=0;
	free(temp);

}

void delete_at_pos()
{
	struct node *temp,*nextnode;
	int i=1,p;
	printf("Enter the position for delete\n");
    scanf("%d",&p);
    p--;
    if(p==0)
    {
    	front_pop();
    }

    else
    {
    	temp=head;
    	while(i<p)
    	{
    		temp=temp->next;
    		i++;
    	}
    	nextnode=temp->next;
    	temp->next=nextnode->next;
    	temp=nextnode->next;
    	temp->prev=nextnode;
    	free(nextnode);

    }

	
}

void reverse()
{
	struct node *temp,*nextnode,*previous=0;
	temp=nextnode=head;
	head=tail;
	tail=temp;

	while(temp!=0)
	{
		nextnode=temp->next;
		temp->next=previous;
		temp->prev=nextnode;
		previous=temp;
		temp=nextnode;


	}
}

int main()
{
	struct node *temp,*newnode;
	int choise=1;
	head=0;

	while(choise)
	{
		newnode=create_node();
		tail=newnode;
		if(head==0)
		{
			head=temp=newnode;
			newnode->prev=0;

		}
		else
		{
			newnode->prev=temp;
			temp->next=newnode;
			temp=newnode;

		}

		printf("Are you add another element press 1 otherwise press 0 \t");
		cin>>choise;

	}

	dislpay();
	push_front();
	dislpay();
	push_back();
	dislpay();
	insert_at_pos();
	dislpay();
	front_pop();
	dislpay();
	back_pop();
	dislpay();
	delete_at_pos();
	dislpay();
	reverse();
	dislpay();



}