#include<iostream>
using namespace std;
int main()
{
	int a[5],i,index,pos,value;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the position to enter and value";
	cin>>pos>>value;
	index=pos-1;
	for(i<5;i>=index;i--)
	{
		a[i+1]=a[i];
	}
	a[index]=value;
	for(i=0;i<5;i++)
	{
		cout<<a[i];
	}
}
