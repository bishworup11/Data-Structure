#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};


struct node * create_node(int data)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=0;
	newnode->right=0;
	return newnode;
}




struct node * insert(struct node *node,int data)
{
	if(node==0)
	{
		return (create_node(data));
	}
	else if(node->data>data)
	{
		node->left=insert(node->left,data);

	}
	else if(node->data<data)
	{
		node->right=insert(node->right,data);

	}
	else
		return node;

	
	   
}

void preOrder(struct node *root)
{
    if(root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
  struct node *root = 0;
 
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);
 
 
 
  printf("Preorder traversal of the constructed AVL"
         " tree is \n");
  preOrder(root);
 
  return 0;
}

