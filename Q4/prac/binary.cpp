#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int i,j,n,x,p;
	int *a;
	cout<<"enter size :";
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
	
	int beg=0,end=n-1,mid=(beg+end)/2;
	cin>>x;
	while(a[mid]!=x&&beg<=end)
	{
		if(a[mid]>x)
		{
			end=mid-1;
			mid=(beg+end)/2;
			
		}
		else
		{
			beg=mid+1;
			mid=(beg+end)/2;
		}
	}
	if(a[mid]==x)
	cout<<"found";
    else
    cout<<"not found";
    delete a;
		
}
