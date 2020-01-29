#include<iostream>
using namespace std;
int tree[20],n=0;
int insert(int item)
{
	n=n+1;
	int ptr=n,par;
	while(ptr>1)
	{
		par=ptr/2;
		if(tree[par]>=item)
		{
			tree[ptr]=item;
			return 0;
		}
		else
		{
			tree[ptr]=tree[par];
			ptr=par;
		}
	}
	tree[1]=item;
	return 0;
}
int Delete()
{
	int item=tree[1];
	int last=tree[n];
	int	n=n-1;
	int ptr=1,left=2,right=3;
	while(right<=n)
	{
		if(last>=tree[left]&&last>=tree[right])
		{
			tree[ptr]=last;
			return item;
		}
		else
		{
			if(tree[right]<=tree[left])
			{
				tree[ptr]=tree[left];
				ptr=left;
			}
			else
			{
				tree[ptr]=tree[right];
				ptr=right;
			}
		}
		left=2*ptr;
		right=left+1;
	}
	if(left==n)
	{
		if(last<tree[left])
	    {
		    tree[ptr]=tree[left];
		    ptr=left;
	    }
	}
	tree[ptr]=last;
	return item;
}
void heapsort(int f)
{ 
	int k;
	for(int i=0;i<f;i++)
	{
		k=insert(tree[i+1]);
	}
	cout<<endl<<"Data after sorting";
	while(n>=1)
	{
		k=Delete();
		cout<<k<<" , ";
	}
}
main()
{
	int n;
	cout<<"How many no you want to enter";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>tree[i];
	}
	cout<<"Data before sorting";
	for(int i=1;i<=n;i++)
	{
		cout<<tree[i]<<" , ";
	}
	heapsort(n);
}
