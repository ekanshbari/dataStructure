#include<iostream>
using namespace std;
void insert(int);
void dele1();
void dele2();
void find(int);
struct node
{
	int info;
	node *left;
	node *right;
} *root=NULL;
node *loc=NULL;
node *par=NULL;
void preorder(node *ptr)
{
	if(ptr!=NULL)
	{
		cout<<ptr->info<<"\t";
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
int main()
{
	int item,item1,i;
	cout<<"enter elements";
	for(i=0;i<7;i++)
	{
		cin>>item;
		insert(item);
	}
	preorder(root);
	cout<<"enter element to delete";
	cin>>item1;
	find(item1);
	if(loc==NULL)
	cout<<"item not found";
	else if(loc->left!=NULL && loc->right!=NULL)
	dele2();
	else
	dele1();
	loc=NULL;
	cout<<"deleted node will be replaced by"<<endl;
	preorder(root);
}
void insert(int item)
{
	node *n=new node;
	n->info=item;
	n->left=NULL;
	n->right=NULL;
	node *ptr=root;
	node *s=NULL;
	if(root==NULL)
	{
		root=n;
	}
	else 
	{
		while(ptr!=NULL)
		{
			if(item<ptr->info)
			{
				s=ptr;
				ptr=ptr->left;
				if(s->left==NULL)
				{
					s->left=n;	
				}
			}
			else
			{
				s=ptr;
				ptr=ptr->right;
				if(s->right==NULL)
				{
					s->right=n;	
				}
			}
		}
	}
	 	
}
void find(int item)
{
	node *ptr=root;
	node *save=NULL;
	while(ptr!=NULL)
	{
		if(item==ptr->info)
		{
			loc=ptr;
			par=save;
			break;
		}
		if(item<ptr->info)
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
	par=save;
}
void dele1()
{
	node * child=NULL;
	if(loc->left==NULL && loc->right==NULL)
	child=NULL;
	else
	{
		if(loc->left!=NULL)
		child=loc->left;
		else
		child=loc->right;
	}
	if(par!=NULL)
	root=child;
	else if(loc==par->left)
	par->left=child;
	else
	par->right=child;
}
void dele2()
{
	node *suc=NULL;
	node *ptr;
	ptr=loc->left;
	node *save=loc;
	while(ptr->left!=NULL)
	{
		save=ptr;
		ptr=ptr->left;
	}
	suc=ptr;
	loc=ptr;
	par=save;
	dele1();
	if(par!=NULL)
     root=suc;
     else if(loc==par->left)
     par->left=suc;
     else
     par->right=suc;
     suc->left=loc->left;
     suc->right=loc->right;
	
}
