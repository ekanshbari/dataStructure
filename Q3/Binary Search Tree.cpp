#include<iostream>
using namespace std;
struct tree
{
	int info;
	 tree *leftlink;
	 tree *rightlink;
};
struct tree *root;
void insert(tree *root,tree *nptr)
{
	if(root==NULL)
	{
		root=nptr;
		root->leftlink=NULL;
		root->rightlink=NULL;
		return;
	}
	if(root->info==nptr->info)
	{
		cout<<"Duplicate";
		return;
	}
	if(root->info>nptr->info)
	{
		if(root->leftlink=NULL)
		{
			insert(root->leftlink,nptr);
		}
	}
	else
	{
		root->leftlink=nptr;
		(root->leftlink)->leftlink=NULL;
		(root->leftlink)->rightlink=NULL;
		return;
	}
	
}

int main()
{
	int nptr,item;
	case1:
		nptr=new->tree;
		cin>>item;
		nptr->info=item;
		insert(root,nptr);
}

