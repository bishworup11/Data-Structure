#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	int height;
	struct node *left;
	struct node *right;
};
int height(struct node *N)
{
	if(N==0)
	{
		return 0;
	}
	else
	{
		return N->height;
	}
}

struct node * create_node(int data)
{
	struct node *newnode;
	newnode=(struct node *) malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=0;
	newnode->right=0;
	newnode->height=1;
	return newnode;
}
int get_balance(struct node *N)
{
	if(N==0)
	{
		return 0;
	}
	else
	{
		return height(N->left)-height(N->right);
	}

}

struct node * leftRotate(struct node *x)
{
	struct node *y;
	struct node *t2;

   y=x->right;
   t2=y->left;

   y->left=x;
   x->right=t2;

   x->height=max(height(x->left),height(x->right))+1;
   y->height=max(height(y->left),height(y->right))+1;

   return y;
}

struct node *rightRotate(struct node *y)
{
	struct node *x=y->left;
	struct node *t2=x->right;

	x->right=y;
	y->left=t2;

	  x->height=max(height(x->left),height(x->right))+1;
      y->height=max(height(y->left),height(y->right))+1;

      return x;


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

	node->height=1+max(height(node->left),height(node->right));

	int balance=get_balance(node);

	//balance

	//left left 
	if(balance>1 && data<node->left->data)
	return rightRotate(node);

   //right right
 if(balance<-1 && data > node->right->data)
	return leftRotate(node);


	if(balance>1 && data>node->left->data)
	{
		node->left=leftRotate(node->left);
	  return rightRotate(node);

	}

	if(balance<-1 && data < node->right->data)
	{
       node->right=rightRotate(node->right);

		return leftRotate(node);
	}

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
 
  /* Constructing tree given in the above figure */
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);
  root = insert(root, 40);
  root = insert(root, 50);
  root = insert(root, 25);
 
  /* The constructed AVL Tree would be
            30
           /  \
         20   40
        /  \     \
       10  25    50
  */
 
  printf("Preorder traversal of the constructed AVL"
         " tree is \n");
  preOrder(root);
 
  return 0;
}

