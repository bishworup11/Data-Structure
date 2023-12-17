#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
	
};

struct node *head,*tail;

void display()
{
	struct node *temp;

		temp=tail->next;
	 while(temp->next!=tail->next)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }
	 cout<<temp->data;
	 cout<<endl;

}
struct node * creat_node( )
{
	struct node * newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	 printf("Enter data\n" );
	scanf("%d",&newnode->data);
	newnode->next=0;
	return newnode;
}

void push_front( )
{
	struct node * newnode,*temp;
	newnode=creat_node();
	if(tail==0)
	{
		tail=newnode;
		newnode->next=newnode;
	}
	else
	{
		newnode->next=tail->next;
	     tail->next=newnode;

	}
	



}



void push_back( )
{
	struct node * newnode,*temp;
	newnode=creat_node();
	 if(tail==0)
     {
     	tail=newnode;
		newnode->next=newnode;

     }	

     else
     {
     	newnode->next=tail->next;
     	tail->next=newnode;
     	tail=newnode;
     }




}


void insert()
{
	struct node *newnode,*temp;

	newnode=creat_node();
	 int p,i=1;

	 cout<<"input position"<<endl;
	 cin>>p;
	 p--;
      
      temp=tail->next;

	 if(p==0)
	 {
	 	   if(tail==0)
	   {
		tail=newnode;
		newnode->next=newnode;
	   }
	    else
	    {
	    	newnode->next=tail->next;
	        tail->next=newnode;

	   }
	

	 }
    else
    {

     while(i<p)
     {
     	temp=temp->next;
     	i++;
     }

     newnode->next=temp->next;
     temp->next=newnode;



    }
	 

}

void front_pop()
{
	struct node *temp;
	temp=tail->next;
	tail->next=temp->next;
	free(temp);
	
}

void back_pop()
{

	struct node *temp,*x;
	temp=tail->next;

	while(temp->next!=tail)
	{
		temp=temp->next;
	}

	temp->next=tail->next;
	x=tail;
	tail=temp;
	free(x);
}

void delete_at_pos()
{
	struct node *temp,*previous,*nextnode;
		temp=head;

		

}


void reverse()
{
	struct node *temp,*previous=0,*nextnode;
		temp=nextnode=head;
		previous=tail;
		temp=nextnode=tail->next;
		while(temp!=tail)
		{
			nextnode=temp->next;
			temp->next=previous;
			previous=temp;
			temp=nextnode;


		}
		tail=temp->next;
		temp->next=previous;


}




int main()
{
	
	struct node *newnode,*temp;
	int choise=1;
	tail=0;
	while(choise)
	{
		
	newnode=creat_node();


	if(tail==0)
	{
	     tail=newnode;
	     tail->next=newnode;
	}
	 else
	 {
	 	newnode->next=tail->next;
	 	tail->next=newnode;

	 	tail=newnode;
	 }

	 cout<<" do you want to continue add linked list(1,0)";
	 cin>>choise;

	}
	display();
	push_front();
	display();
	push_back();
	display();
	insert();
	display();
	front_pop();
	display();
	back_pop();
	display();
	reverse();
	display();





}