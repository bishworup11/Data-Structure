#include<bits/stdc++.h>
using namespace std;
//# define N 5;
const int  N=5;
struct node
{ int data;
	struct node *left,*right;
	
};
struct node * create(int a[],int n)
{
	int x=0;

	struct node *newnode,*root=0,*temp;
while(x!=n)
{

	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=a[x];
	newnode->left=0;
	newnode->right=0;
	temp=root;

	if(x==0)
		{
			
			temp=root=newnode;
		}
	else
	{
		again :
		
		if(a[x]<=temp->data)
		{
			if(temp->left==0)
				temp->left=newnode;
			else
			{

				temp=temp->left;
				goto again;
			}


		}
		else
		{
			if(temp->right==0)
			{
				temp->right=newnode;
			}
			else
				{
			     temp=temp->right;
			     goto again;
			   }

		}

	}
	x++;



}
	
	
	return root;

}

void preorder(struct node *root)
{
	if(root==0)
		return;
	else
	{
		printf("%d ",root->data );
		preorder(root->left);
		preorder(root->right);
	}
	//cout<<endl;
}

void inorder(struct node *root)
{
	if(root==0)
		return;
	else
	{
		inorder(root->left);
		
		cout<<root->data<<" ";
		inorder(root->right);
	}



}

void postorder(struct node * root)
{
	if(root==0)
	{
		return;
	}
	else
	{

		
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data );
		
	}
	
}

int main()
{
	struct node *root;
	root=0;
	
	int a[20],n;
	printf("input number of nodes\n");
	scanf("%d",&n);
	for (int i = 0; i <n; ++i)
	{
		cin>>a[i];
	}


root=create(a,n);


	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
}
