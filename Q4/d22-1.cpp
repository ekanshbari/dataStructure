#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *a;
	cout<<"enter size of array\n";
	int n,m,i=0;
	cin>>n;
	a=new int[n];
	cout<<"enter the values\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	 }
	 for(i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	 }  
	 cout<<"\nenter the value you want to search\n";
	 cin>>m;
	 for(i=0;i<n;i++)
	{
		
		if (a[i]==m)
		{
		cout<<"found\n";
		break;
	    }
	 }  
	 if(i==n)
	 cout<<"not found";
	 
	 getch();
}
