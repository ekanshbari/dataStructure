#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int info;
	node *left,*right;
};
node *root=NULL,*loc,*par;
void find(int item,node *root);
void insertion();
void traverse(node *root);

int main()
{
	int k;
	while(1);
	{
		cout<<"Enter 1 for insertion";
		cout<<"Enter 2 for Traversal";
		cout<<"Enter 1 for Exit";
		cout<<endl;
		cout<<"Enter the item :";
		cin>>k;
		switch(k)
		{
			case 1:
				insertion();
				break;
			case 2:
				Traverse(root);
				break;
			case 3:
				Exit(0);
	  }
	
	}
	}
void find(int item,node *root)
{
	node *ptr,*save;
	if(root==NULL)
	{
		loc=NULL;
		par=NULL;s
		return;
		
	}
	else if(item==root->info)
	{
		loc=root;
		par=NULL;
	}
	else
	{
		if(item<root->info)
	}
}
