#include<iostream>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};
node *root=NULL,*loc=NULL,*par=NULL; //par=parent
int search(int item)
{
	node *ptr,*save;
	if(root==NULL)
	{
		loc=NULL;
		par=NULL;
		return 0;
	}
	if(root->data==item)
	{
		loc=root;
		par=NULL;
		return 0;
	}
	else
	{
		if(root->data>item)
		{
			ptr=root->left;
			save=root;
		}
	else
	{
		ptr=root->right;
		save=root;
	}
	}
	while(ptr!=NULL)
	{
		if(ptr->data==item)
		{
			loc=ptr;
			par=save;
			return 0;
		}
	    else
	    {
		    if(ptr->data>item)
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
	}
	loc=NULL;
	par=save;
	return 0;
}
void insert()
{
	int k;
	node *new_node;
	new_node=new node;
	new_node->left=NULL;
	new_node->right=NULL;
	cout<<"enter number to insert";
	cin>>new_node->data;
	k=search(new_node->data);
	if(loc==NULL)
	{
		if(par==NULL)
		{
			root=new_node;
		}
		else
		{
			if(par->data>new_node->data)
			{
				par->left=new_node;
			}
			else
			{
				par->right=new_node;
			}
		}
	}
	else
	{
		cout<<"data already exist";
	}
}
void display(node*root)
{
	if(root!=NULL)
	{
		display(root->left);
		cout<<root->data<<" , ";
		display(root->right);
	}
}
main()
{
	insert();
	insert();
	insert();
	insert();
	insert();
	display(root);
}
