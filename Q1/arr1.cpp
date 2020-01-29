#include<iostream>
using namespace std;
int main()
{
	int i,j,a[100][100],m,n,s=0,b;
	cout<<"enter length for 2-d array";
	cin>>m>>n;
	cout<<"enter elements in array";
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			s=s+a[i][j];
		}
	}
	b=s/(m*n);
	cout<<"Sum="<<s<<endl;
	cout<<"Average="<<b;
}
