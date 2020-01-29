#include<iostream>
using namespace std;
int main()
{
	
	int i,val,index,pos,n;
	cout<<"enter size of array:"<<flush;
	cin>>n;
	char a[n];
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{cin>>a[i];	}
	cout<<"enter the position u want to delete"<<endl;
	cin>>pos;
	index=pos-1;
	for(i=index;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;i<n-1;i++)
	{
	cout<<a[i]<<endl;
	}
	
}
