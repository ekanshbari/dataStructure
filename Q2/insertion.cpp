#include<iostream>
using namespace std;
main()
{
	int i,pos,index,n;
	char a[10],val;
	cout<<"enter the size of an array"<<endl;
	cin>>n;
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the value you want to insert"<<endl;
	cin>>val;
	cout<<" enter the position where you want to insert "<<endl;
	cin>>pos;
	index=pos-1;
	for(i=n-1;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=val;
	for(i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
	}
}
