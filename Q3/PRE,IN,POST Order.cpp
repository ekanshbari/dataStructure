#include<iostream>
using namespace std;
struct tree
{
	int info;
	 tree *left;
	 tree *right;
};
struct tree *root;
void pre(tree *root);
void in(tree *root);
void post(tree *root);

void pre(tree *root)
{
if(root==NULL)
{
	cout<<"Empty";
	return;
}
if(root!=NULL)
{
	cout<<root->info;
	pre(root->left);
	post(root->right);
}
}

void in(tree *root)
{
	if(root==NULL)
 {
	cout<<"Empty";
	return;
 }
   if(root!=NULL)
		cout<<tree->info;
		in(tree->right);
				
	}
}
	
void post(tree *root)
{
	if(root==NULL)
 {
	cout<<"Empty";
	return;
 }
   if(root!=NULL)
	{
		post(root->left);
		post(root->right);
		cout<<root->info;
	{
		in(tree->left);
	}
}
