#include<bits/stdc++.h>
using namespace std;
//# define N 5;
const int  N=5;
struct node
{ int data;
	struct node *left,*right;
	
};
struct node * create()
{
	int x;
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	printf("Enter the data(-1 for no node)\n");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	newnode->data=x;
	printf("Enter left child of %d\n",x );
	newnode->left=create();
	printf("Enter right child of %d\n",x );
	newnode->right=create();
	return newnode;

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
	root=create();
	preorder(root);
		cout<<endl;
	inorder(root);
		cout<<endl;
	postorder(root);
}
