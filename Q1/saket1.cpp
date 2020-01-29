//WAP to create a tree of minimum 8 elements .Display the contents in preorder from a particular node.
#include<iostream>
using namespace std;
struct tree{
	int info;
	tree *left;
	tree *right;
}; tree *root=NULL,*ptr=NULL;
void insert()
{
	int value;
	tree *n1=new tree();
	cout<<"Enter the value of the node"<<endl;
	cin>>value;
	n1->info=value;
	if(root==NULL)
	{
		root=n1;
	}
	else
	{
		ptr=root;tree *temp=NULL;
		while(ptr!=NULL)
		{
			temp=ptr;
			if(ptr->info>value)
			ptr=ptr->left;
			else
			ptr=ptr->right;
		}
		if(temp->info>value)
		temp->left=n1;
		else
		temp->right=n1;
	}
		n1->right=n1->left=NULL;
}
void preorder(tree *pp)
{
	if(pp!=NULL)
	{
		cout<<pp->info<<" ";
		preorder(pp->left);
		preorder(pp->right);
	}
}	
int main()
{
	int k=-1;
	while(k)
	{
		cout<<"Enter 1 to enter new element"<<endl;
		cout<<"Enter 2 to display from a particular node"<<endl;
		cout<<"Enter 3 to exit"<<endl;
		int ch;
		cin>>ch;
		switch(ch)
		{
			case 1:	insert();
				break;
			case 2:
				int n;
				cout<<"Enter the value of the node from which you want to print the tree"<<endl;
				cin>>n;
				ptr=root;tree *tt;
				while(ptr!=NULL)
				{
					if(ptr->info==n)
					{
						tt=ptr;
						break;
					}
					else if(ptr->info>n)
					{
						ptr=ptr->left;
					}
					else
					ptr=ptr->right;
				}
				preorder(tt);
				break;
			case 3: cout<<"Thanks for using"<<endl;
				    k=0;
				break;
			default:cout<<"Wrong choice entered"<<endl;
				break;
	    }
	}	
}
				
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
