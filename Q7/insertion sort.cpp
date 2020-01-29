#include<iostream>
using namespace std;
int main()
{
	int a[7],i,temp,n;
	for(i=0;i<7;i++)
	{
		cin>>a[i];
	}
	
		for(i=0;i<7;i++)
	{
			n=i;
			for(int j=n;j>0;j++)
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	}
		for(i=0;i<6;i++)
	{
		cout<<a[i];
	}
}
