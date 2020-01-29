#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *a;
	cout<<"enter size of array\n";
	int n,m,k;
	cin>>n;
	a=new int[n];
	cout<<"enter the values\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 }
	 for(int i=0;i<n;i++)
	{
		cout<<a[i];
	 }  
	 cout<<"enter the value you want to search\n";
	 cin>>m;
	 for(int i=0;i<n;i++)
	{
		
		if (a[i]==m)
		{
		cout<<"found\n";
		k=1;
	    }
	 }  
	 if(k!=1)
	 cout<<"not found";
	 
	 getch();
}
