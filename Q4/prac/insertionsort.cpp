#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *a,n,i,j,temp,x;
	cout<<"Enter the size of array : ";
	cin>>n;
	a=new int[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"Enter the position to insert : ";
	cin>>x;
	for(int i=n;i>x;i--)
	a[i]=a[i-1];
	cout<<"Enter the element to insert : ";
	cin>>a[x];
	for(i=0;i<n+1;i++)
	for(j=0;j<n-i+1;j++)
	if(a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	for(i=0;i<n+1;i++)
	cout<<a[i];
	delete a;
}
