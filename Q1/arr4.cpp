#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,t,p;
	cout<<"enter length";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n-2;i>=0;i--)
	{
		t=a[i];
		p=i+1;
		while(a[p]>t)
		{
			a[p-1]=a[p];
			p=p+1;
		}
		a[p-1]=t;
	}
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
}
