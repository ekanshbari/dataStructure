//insertion
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *p,n,x,c=0;
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	cin>>p[i];
	cout<<"Enter the element to search : ";
	cin>>x;
	for(int i=0;i<n;i++)
	if(p[i]==x)
	{
		cout<<" Found At : "<<i;
		c=1;
		break;
	}
	if(c==0)
	cout<<"Not Found";
}
