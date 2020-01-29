#include<iostream>
using namespace std;

void mergepass(int a[],int n,int l,inmt b[])
{
	int j,lb;
	int q,s,r;
	q=n/(2*l);  //q is the total pair of arrays tyo be merge
	s=2*l*q;  //s is the total number of elements, in all pairs 
	r=n-s;   //r is residual element
	
	for(j=0;j<q;j++)
{
	lb=(2*j)*l;   //lower bound of first array
	merge(a,l,lb,a,l,lb+l,b,lb);  //merging two arrays
}
if(r<=l)   //if only one array left
{
	for(j=0;j<r;j++)
	b[s+j]=a[s+j];   //copy last array to b
}
else   // if last pair of arrayare of unequal sizze
{
	merge(a,l,s,a,r-l,s+l,b,s);
}
}


void mergesort(int a[],int n)
{
	int l=1,b[11];  // l is subarray after merging ie 1,2,4,8 as last element is 11so l<n as n=11
	while(l<n)
	{
		mergepass(a,n,l,b);    // a is array and elemennt is passed to b n is total element and l is size of subarray
		mergepass(b,n,2*l,a);
		l=l*4;
	}
}


int main()
{
	int i,a[]={11,66,88,33,66,77,99,88,22,44,55};
	for(i=0;i<11;i++)
	{
		cout<<a[i];
	}
	mergesort(a,11);
	cout<<"\n";
	for(i=0;i<11;i++)
	{
		cout<<a[i];
	}
}
