#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,n,c;
	cout<<"enter length of array";
	cin>>n;
	cout<<"enter elements";
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			c=c+1;
		}
		if(c%2!=0)
		cout<<a[i]<<"\t occurred \t"<<c<<"times"<<endl;
	}
}
