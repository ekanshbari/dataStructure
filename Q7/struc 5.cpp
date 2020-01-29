#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
	int id, sallary;
	char name[10],designation[10];
	
	
};
	void setdata()
	{
		cout<<endl<<"enter id"<<endl;
		cin>>id;
	cout<<"enter sallary"<<endl;
		cin>>sallary;
	
	cout<<"enter name"<<endl;

	cin>>name;
		cout<<"enter designation"<<endl;

	cin>>designation;
	
	}
	
	void showdata()
	{
		cout<<name<<endl<<id<<endl<<sallary<<endl<<designation;
	}
	void logic()
	{
		cout<<"enter designation to be searched";
		cin>>desi;
		if(strcmp(designation,a[10])&& sallary>=40000))
		{
			cout<<a[10]<<endl<<sallary;
		}
	
	}
};
int main()
{
	employee e1[2];
	e1.setdata();
	e1.logic();
	e1.showdata();
	return 0;	
	}
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
