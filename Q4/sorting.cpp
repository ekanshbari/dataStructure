#include<iostream>
using namespace std;
int main()
{
	int a[10];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		
	}
		for(int i=0;i<5;i++)
	{
	   if(a[i]<a[i+1])
	   {
	    cout<<a[i];
	    
	   }
	   else if(a[i]>a[i+1])
	   cout<<a[i+1];
	   
	}
}
