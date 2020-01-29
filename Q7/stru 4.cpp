#include<iostream>
using namespace std;
struct employee
{
	int id, sallary;
	char name[10],designation[10];
	
	
};
int main()
{
	employee *ptr;
	employee e1[10];
	ptr=&e1[0];
	int n,i;
	cout<<"enter no of details to be enterd";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		cout<<endl<<"enter id"<<endl;
		cin>>(ptr)->id;
	cout<<"enter sallary"<<endl;
		cin>>(ptr)->sallary;
	
	cout<<"enter name"<<endl;

	cin>>(ptr)->name;
	cout<<"enter designation"<<endl;

	cin>>(ptr)->designation;
	

	cout<<(ptr)->name<<endl<<(ptr)->id<<endl<<(ptr)->sallary<<(ptr)->designation;
	}
}
