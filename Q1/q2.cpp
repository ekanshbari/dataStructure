//1)	Write a program to ask the user for 10 integer numbers and display the even ones.
#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	for (i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for (i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<endl;
		}
	}
}

