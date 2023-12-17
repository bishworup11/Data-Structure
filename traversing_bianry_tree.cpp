#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *leftnode,*rightnode;
  
};

struct node * create()
{
  struct node *newnode;
  newnode=(struct node *) malloc(sizeof(struct node));
  int x;
  cout<<"Enter data (-1 for no data)"<<endl;
  cin>>x;
  if(x==-1)
  {
    return 0;
  }
  newnode->data=x;

  cout<<"Enter the Left node of "<<x<<endl;
  newnode->leftnode=create();
  cout<<"Enter the Right  node of "<<x<<endl;
  newnode->rightnode=create();

  return newnode;
}

void preorder(struct node *root)
{
  if(root==0) return;
  cout<<root->data<<" ";
  preorder(root->leftnode);
  preorder(root->rightnode);

}
void inorder(struct node *root)
{
  if(root==0) return;
  
  inorder(root->leftnode);
  cout<<root->data<<" ";
  inorder(root->rightnode);

}

 void mirror(node* node) {
        if(!node)return;
       swap(node->leftnode,node->rightnode);
        mirror(node->leftnode);
        mirror(node->rightnode);
        //swap(node->leftnode,node->rightnode);
    }

void postorder(struct node *root)
{
  if(root==0) return;
  
  postorder(root->leftnode);
  postorder(root->rightnode);
  cout<<root->data<<" ";

}


int main()
{
  struct node *root;

  root=create();
  cout<<"Display in preorder"<<endl;
  preorder(root);
  cout<<"Display in inorder"<<endl;
  inorder(root);
 // cout<<"Display in postorder"<<endl;
 mirror(root);
   cout<<"Display in inorder"<<endl;
  inorder(root);
}