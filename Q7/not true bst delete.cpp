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
	inorder(root);
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

void search(int item)
{
    node *ptr=root,*save=NULL,*loc=NULL;
    int *par=NULL;
    while(ptr!=NULL)
    {
    	if (item=info[ptr])
    	{
    		loc=ptr;
			par=save;
		}
		return;
		if(item<info[ptr])
		{
			save=ptr;
			ptr=ptr->left;
		}
		else
		{
			save=ptr;
			ptr=ptr->right;
			
		}
	}
	
	loc=ptr;
	ptr=save;
	return ;
}

void delete(int item)
{
	search(loc);
	if(loc=NULL)
	{
		cout<<"element not found";
		return ;	
	}
	if(loc->left!=NULL && loc->right!=NULL)
	{
		case a(int *loc,int *par);
		
	}
	else
	{
		case b(int *loc,int *par);
	}
	
		return loc;
	
}
