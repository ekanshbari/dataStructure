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
	{
	for(int j=0;j<i;j++)
	if(p[i]==p[j])
	{
		c=1;
	}
	if(c==0)
	cout<<p[i];
    }
}
