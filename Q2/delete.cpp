#include<iostream>
using namespace std;
int main()
{
cout<<"enter the elements"<<endl;	
	int i,pos,index;
	int a[100];
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<" enter the position where you want to delete "<<endl;
	cin>>pos;
	index=pos-1;
	for(i=index;i<5;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
}
