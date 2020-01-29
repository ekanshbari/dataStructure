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
		a[i]=new int [i+1];
	}
	cout<<"\nenter the values\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<i+1;j++)
		{
		cin>>a[i][j];
     	}
	}
	cout<<"entered values are\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<i+1;j++)
		{
		cout<<a[i][j]<<"\t";
     	}
     	cout<<"\n";
	}
	 
	 getch();
}
