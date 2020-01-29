//sorting
#include<iostream>
using namespace std;
int main()
{
	int *p,n,temp,s=0,c=0;
	cin>>n;
	p=new int[n];
	for(int i=0;i<n;i++)
	cin>>p[i];
	for(int i=0;i<n;i++)
    {	
		if(p[i]>s)
		{
			s=p[i];
		}
		else
		c=c+1;
	}
	if(c!=0)
	{
    for(int i=0;i<n-1;i++)
	for(int j=0;j<n-i-1;j++)
	if(p[j]>p[j+1])
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
	
	cout<<"sorting done";
    }
    else
    	cout<<"alreay sorted";
    
	for(int i=0;i<n;i++)
	cout<<p[i];
}
