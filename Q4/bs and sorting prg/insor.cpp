#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *a,n,i,j,t,s;
	cout<<"Enter the size of array : ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	i=0
	a[i-1]=-10
	for(i=1;i<n;i++)
	{
	t=i-1;
	s=a[i];
	while(s>a[t])
	{
		a[t+1]=a[t];
		t=t-1;
	}
	a[t+1]=s;
    }
	cout<<"sorted array is :";
	for(i=n-1;i>=0;i--)
	cout<<a[i];
		
}
