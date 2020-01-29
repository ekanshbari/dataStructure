#include<iostream>
using namespace std;
void insert (int);
struct node
{
	int info;
	node *left;
	node *right;
}*root=NULL;
int main()
{
	int item,i;
	cout<<"enter item";
	for(i=0;i<6;i++)
	{
		cin>>item;
		insert(item);
	}
}

void insert(int item)
{
	node *par=root;
	node *n=new node;
	n->right=NULL;
	n->left=NULL;
	if(par==NULL)
	{
		root=n;
	}
	else if(item<info[par])
	{
		left[par]=n;
	}
	else
	{
		right[par]=n;
	}
}
