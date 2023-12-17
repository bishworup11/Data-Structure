#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* left;
	struct Node* right;

};

struct Node* createNode(int data)
{
	struct Node * newnode;
	newnode = (struct Node *) malloc(sizeof(struct Node));
	newnode->data = data;
	newnode->left = 0;
	newnode->right = 0;
	return newnode;
}

struct Node* insert(struct Node* node, int data)
{
	if (node == 0)
	{
		return createNode(data);
	}

	else if (data < node->data)
	{
		node->left = insert(node->left, data);
	}

	else
	{
		node->right = insert(node->right, data);
	}

	return node;

}

struct Node* searchBST(struct Node* root, int data)
{
	if (root == 0)
		return 0;
	if (data == root->data)
		return root;
	else if (data < root->data)
		return searchBST(root->left, data);
	else
		return searchBST(root->right, data);
}

struct Node* inordersecc(struct Node* root)
{
  struct Node * temp = root;
	while (temp&&temp->left!=NULL)
	{
		temp = temp->left;
	}
	return temp;

}
struct Node* deleteBST(struct Node* root, int data)
{
	if (root == NULL)
		return root;

	if (data < root->data)
		root->left = deleteBST(root->left, data);
	else if (data > root->data)
		root->right = deleteBST(root->right, data);
	else
	{	if (root->left == NULL && root->right == NULL)
			return NULL;
		else if (root->left == NULL)
		{
			root = root->right;
			return root;
		}
		else if (root->right == NULL)
		{
			root = root->left;
			return root;
		}

		struct Node* temp = inordersecc(root->right);
		root->data = temp->data;
		root->right = deleteBST(root->right, temp->data);



	}
		return root;
	

}

void inorder(struct Node * root)
{
	if (root != NULL) {
		inorder(root->left);
		cout << root->data << " ";
		inorder(root->right);

	}

}




int main()
{

	struct Node* root = 0;
	root = insert(root, 5);
	root = insert(root, 10);
	root = insert(root, 4);
	root = insert(root, 2);
	root = insert(root, 3);
	root = insert(root, 12);
	root = insert(root, 8);

	inorder(root);
	cout << endl;
	if (searchBST(root, 1) == NULL)
		cout << "data is not exist" << endl;
	else
		cout << "data is exist " << endl;

	root = deleteBST(root, 10);
	inorder(root);
	root = deleteBST(root, 10);
	cout<<endl;
	inorder(root);





}