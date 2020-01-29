#include<iostream>
using namespace std;
main()
{
	int tree[20],n,item,par,ptr;
	cout<<"Enter the size of Tree";
	cin>>n;
	n=n+1;
	ptr=n;
	
	for(int i=0;i<n;i++)
	cin>>tree[n];
	cout<<"Enter the item";
		cin>>item;
	while(ptr>1)
	{
		par=n/2;
		
		
		if(item<=tree[par])
		{
			tree[ptr]=item;
			return 0;
		}
		tree[ptr]=tree[par];
		ptr=par;
		
	}
	tree[1]=item;
	for(int i=0;i<n+1;i++)
	{
	          cout<<tree[n];
	          
	}
}
