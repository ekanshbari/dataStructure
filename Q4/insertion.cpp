//insertion
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *p,n,x;
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	cin>>p[i];
	cout<<"Enter the position to insert : ";
	cin>>x;
	for(int i=n;i>x;i--)
	p[i]=p[i-1];
	cout<<"Enter the element to insert : ";
	cin>>p[x];
	for(int i=0;i<=n;i++)
	cout<<p[i];
	delete p;
	getch();
}
