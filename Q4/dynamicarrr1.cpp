#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int **a;
	int r,c;
	cin>>r;
	a=new int* [r];
	for(int i=0;i<r;i++)
	{
		a[i]=new int [r-i];
	}
	cout<<"\nenter the values\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r-i;j++)
		{
		cin>>a[i][j];
     	}
	}
	cout<<"entered values are\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<r-i;j++)
		{
		cout<<a[i][j]<<"\t";
     	}
     	cout<<"\n";
	}
	 
	 getch();
}
