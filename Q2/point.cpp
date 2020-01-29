#include<iostream>
using namespace std;
main()
{
	int a[]={1,10,5,56,8};
	int i;
	int *p;
	p=&a[0];
	int max;
	max=a[0];
	for(i=0;i<5;i++)
	{
	if(*(p+i)>max)
	max=*(p+i);
	}
cout<<max;	
	
}
