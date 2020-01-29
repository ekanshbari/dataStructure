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
	cout<<"Enter the position to delete: ";
	cin>>x;
	for(int i=x;i<n-1;i++)
	p[i]=p[i+1];
	for(int i=0;i<n-1;i++)
	cout<<p[i];
	delete p;
	getch();
}
