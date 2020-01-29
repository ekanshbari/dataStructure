#include<iostream>
using namespace std;
struct tree
{
	int info,n;
	 tree *left;
	 tree *right;
};
void search(tree n,int item)
{
if(n ==NULL)
{
	cout<<"Empty";
	return;
}
if(n!=NULL)
{
	if(n->info==item)
	{
		cout<<"Found";
		return;
	}
}
if(n->info>item)
{
	search(n->info,item);
}
else
{
	search(n->right,item);
}
else
{
	cout<<"Item not found";
	return;
}
}
