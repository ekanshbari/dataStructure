#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,n,x=0,p;
	int *a;
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
	{
	if(a[j]>a[j+1])
	{
		p=a[j];
		a[j]=a[j+1];
		a[j+1]=p;
	}
	}	
	}
    for(i=0;i<n;i++)
	cout<<a[i];
    delete a;
		
}
