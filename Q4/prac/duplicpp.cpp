#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int *a,c=0,x;
	cin>>x;
	a=new int[x];
	for(int i=0;i<x;i++)
	cin>>a[i];
	for(int i=0;i<x;i++)
	{ 
	c=0;
	for(int j=0;j<i;j++)
	{
		if(a[i]==a[j])
		{
		c=1;
        }
	}
	if(c==0)
	cout<<a[i];
    }
	
}

