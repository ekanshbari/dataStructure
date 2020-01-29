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
	for(int i=0;i<n;i++)
	if(p[i]>c)
	c=p[i];
	cout<<"Greatest : "<<c<<cout;
	for(int i=0;i<n;i++)
	if(p[i]<c)
	c=p[i];
	cout<<"Smallest : "<<c;
}
