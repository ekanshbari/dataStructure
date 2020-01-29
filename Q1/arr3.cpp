#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,item,b,e,m;
	cout<<"enter length";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				item=a[i];
				a[i]=a[j];
				a[j]=item;
			}
		}
	}
	cout<<"sorted array"<<endl;
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	cout<<"enter element to search";
	cin>>item;
	b=1;
	e=n;
	while(b<=e)
	{
		m=(b+e)/2;
		if(a[m]==item)
		{
		cout<<"item found at "<<m+1;
		break;
	    }
		else if(a[m]>item)
		e=m-1;
		else if(a[m]<item)
		b=m+1;
		else
		cout<<"Item not found";
	}
}
