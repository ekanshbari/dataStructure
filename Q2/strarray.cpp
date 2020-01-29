#include<iostream>
using namespace std;
struct emplo{
	int id;
	char name[100];
	int age;
	long salary;
};
int main()
{
	int i;
	struct emplo emp[3];
    for(i=0;i<3;i++)
    {
    	cout<<"enter details of emlpo "<<i+1<<" ";
    	cout<<"enter id:";
		cin>>emp[i].id;
    	cout<<" enter name:";
		cin>>emp[i].name;
    	cout<<" enter age:";
		cin>>emp[i].age;
    	cout<<" enter salary:";
		cin>>emp[i].salary;
	}
	cout<<"enter details";
	for(i=0;i<3;i++)
	{
		cout<<emp[i].id<<endl<<emp[i].name<<emp[i].age<<emp[i].salary;
	}
	
}
