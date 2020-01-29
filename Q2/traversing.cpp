#include<iostream>
using namespace std;
int main()
{
	
	int i,n;
	cout<<"enter the size of array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the elements:";
	for(i=0;i<n;i++)
	{cin>>a[i];	
	}
		for(i=0;i<n;i++)
	{cout<<a[i]<<" ";	
	}
}
