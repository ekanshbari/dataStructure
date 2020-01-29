#include<iostream>
using namespace std;
void insert(int);
struct node
{
	int info;
	node *right;
	node *left;
} *root=NULL;
void preorder(node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->info<<"\t";
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void inorder(node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->left);
		cout<<ptr->info<<"\t";
		inorder(ptr->right);
	}
}

void postorder(node *ptr)
{
	if(ptr!=NULL)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		cout<<ptr->info<<"\t";
	}
}
int main()
{
	int item,i;
	cout<<"enter number";
	for(i=0;i<6;i++)
	{
		cin>>item;
		insert(item);
	}
	preorder(root);
	cout<<endl;
	//node *loc=NULL;
	inorder(root);
	cout<<endl;
	postorder(root);
}
void insert(int item)
{
	node *p=NULL;
	node *par=root;
	node *n=new node;
	n->info=item;
	n->right=NULL;
	n->left=NULL;
	if(par==NULL)
	{
		root=n;		
	 } 
	 else 
	 {
	 	while(par!=NULL)
	 	{ 
	 if(item<par->info)
	 {
	 	p=par;
	 	par=par->left;
	 	if(p->left==NULL)
	 	{
	 		p->left=n;
		 }
	 }
	 else
	 {
	 	p=par;
	 	par=par->right;
	 	if(p->right==NULL)
	 	p->right=n;
	 }
        }
     }
}
