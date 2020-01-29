#include<iostream>
using namespace std;
struct employee
{
	int id, sallary;
	char name[10];
	
	
};
int main()
{
	employee *ptr,x;
	ptr=&x;
	cout<<"enter id"<<endl;
		cin>>(*ptr).id;
	cout<<"enter sallary"<<endl;
		cin>>(*ptr).sallary;
	
	cout<<"enter name"<<endl;

	cin>>(*ptr).name;

	cout<<(*ptr).name<<endl<<(*ptr).id<<endl<<(*ptr).sallary;
	
	return 0;
}
