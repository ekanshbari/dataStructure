#include<iostream>
using namespace std;
struct employee[n]
{
	int id, sallary;
	char name[10];
	
		
}; 
int main()
{
	int n,i;
	cout<<"enter no of employee details to enter"<<endl;
	cin>>n;
	while(i<=n)
	{
	employee *ptr,x;
	ptr=&x;
	cout<<endl<<"enter id"<<endl;
		cin>>(ptr)->id;
	cout<<"enter sallary"<<endl;
		cin>>(ptr)->sallary;
	
	cout<<"enter name"<<endl;

	cin>>(ptr)->name;

	cout<<(ptr)->name<<endl<<(ptr)->id<<endl<<(ptr)->sallary;}
	
	return 0;
}
	
}
	
