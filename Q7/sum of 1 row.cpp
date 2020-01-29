#include<iostream>
using namespace std;
int i;
fun(int *p)
{
	int sum=0;
	for(int i=0;i<=2;i++)
	{
		sum=sum+*p;

		p=p+1;
	}	cout<<sum;
	 
	
}
int main()
{
	int a[3][3];
	
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			
				cin>>a[i][j];
				
		}
}
	
		for(int i=0;i<=2;i++)
	{
			for(int j=0;j<=2;j++)
		{
			
				cout<<a[i][j]<<"\t";
				
		}cout<<endl;
			
}
fun (a[0]);


	
}
