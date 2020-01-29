#include<iostream>
using namespace std;
main()
{
	int a[11],n,ptr=0,left,right;
    int item=a[0];
    int last=a[n];
    cout<<"Enter the size of array";
    cin>>n;
    for(int i=0;i<n;i++)
	cin>>a[n];
	n=n-1;
	left=1;
	right=2;
	while(right<=n)
	{
		if(last>a[left] && last>a[right])
		{
			a[ptr]=last;
			return item;
		}
		if(a[left]>a[right])
		{
			a[ptr]=a[left];
			ptr=left;
		}
		else
		{
		a[ptr]=a[right];
			ptr=right;
		}
		left=2*ptr;
		right=2*ptr+1;
	}
	if(left=n && last<a[left])
	{
		a[ptr]=a[left];
		ptr=left;		
	}
	a[ptr]=last;
	return item;
    
}
