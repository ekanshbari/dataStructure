/* create structure employee having name,id,salary,desig,create an array structure type insert n records in that array 
and acess all the element of the array using pointer*/
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
	
struct employee
{
	char name[20];
	int id;
	char desig[10];
	float salary;
};

void getdata(int n)
{	struct employee s[n];
	struct employee*p;
	p=s;
		
	int i;
	i=1;
		while(i<n)
	{ cout<<" \n Enter the name of employee "<<endl;
	  cin>>(p->name);
	  cout<<" Enter the ID of employee"<<endl;
	  cin>>p->id;
	  cout<<"  Enter the designation of the employee"<<endl;
	  cin>>(p->desig);
	  cout<<"  enter the  salary of employee"<<endl;
	  cin>>p->salary;
	  cout<<" DATA RECORDED........"<<endl;
	  i++;
	 p++;
	}
}
void show(int n)
{		
	struct employee s[n];	
	struct employee*p;
	p=s;
		
	int i;
	i=1;
	while(i<n)
	{	cout<<"DATA STORED ARE:"<<endl;
	cout<<"\nNAME:"<<(p->name);
	cout<<"\nID:"<<(p->id);
	cout<<"\nDESIGNATION:"<<(p->desig);
	cout<<"\nSALARY:"<<(p->salary);
	p++;
	i++;
	}	
}

void showdata(char des[],float sal,int n)
{
	struct employee s[n];
	struct employee*p;
	p=s;
	int i;
	for(i=0;i<20;i++)
	{
		
	if((strcmp(des,p->desig)==0)&&(sal<p->salary))
	{
		cout<<"NAME:"<<(p->name);
		cout<<"ID:"<<(p->id);
		cout<<"DESIGNATION:"<<(p->desig);
		cout<<"SALARY:"<<(p->salary);
		
	}	p++;
}
}
int main()
{	int n;
struct employee s[n];
char desi[10];
float saly;
	
	cout<<" Enter the number of employee record to be inserted "<<endl;
    cin>>n;

    	getdata(n);
    	show(n);
    	cout<<"enter degination to be searched"<<endl;
    	cin>>desi;
     	cout<<"enter the salary to be searched"<<endl;
     	cin>>saly;
       	showdata(desi,saly,n);

}
