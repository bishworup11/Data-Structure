#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
	
};

void display(struct node *head)
{
	struct node *temp=head;

		temp=head;
	 while(temp!=0)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }
	 cout<<endl;

}




int main()
{
	
	struct node *head,*newnode,*temp;
	int choise=1;
	head=0;

	while(choise)
	{
		newnode=(struct node *) malloc(sizeof(struct node));
	 printf("Enter data\n" );

	// cin>>newnode->data;

	 scanf("%d",&newnode->data);

	 newnode->next=0;
	if(head==0)
	     head=temp=newnode;
	 else
	 {
	 	temp->next=newnode;

	 	temp=newnode;
	 }

	 cout<<" do you want to continue add linked list(1,0)";
	 cin>>choise;

	}

	//display

     // display(head);

	 temp=head;
	 while(temp!=0)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }
	 cout<<endl;

	 //insert in first

	 cout<<"insert in first"<<endl;


    newnode=(struct node *) malloc(sizeof(struct node));

    printf("input data\n");

    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;

    	//display
     temp=head;
	 while(temp!=0)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }

	 cout<<endl;


	 //insert in last

	  cout<<"insert in last"<<endl;

	  newnode=(struct node  *) malloc(sizeof(struct node));

	      printf("input data\n");
         
          scanf("%d",&newnode->data);

          temp=head;
          while(temp->next!=0)
          {
          	temp=temp->next;
          }

          temp->next=newnode;
          newnode->next=0;

       temp=head;
	 while(temp!=0)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }

	 cout<<endl;

	 //insert in middle

	 newnode=(struct node *) malloc(sizeof(struct node));
	 cout<<"input data"<<endl;
	 cin>>newnode->data;
	 newnode->next=0;
	 int p,i=1;

	 cout<<"input position"<<endl;
	 cin>>p;

	 temp=head;

	 while(i<p)
	 {
	 	temp=temp->next;
	 	i++;

	 }

	 newnode->next=temp->next;
	 temp->next=newnode;



      temp=head;
	 while(temp!=0)
	 {
	 	cout<<temp->data<<" ";
	 	temp=temp->next;
	 }

	 cout<<endl;








}