#include<iostream>
using namespace std;
struct employee
{
	int id, sallary;
	string name;
	char designation;
	
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
	cout<<"designation"<<endl;

	cin>>(*ptr).designation;
	cout<<(*ptr).name<<endl<<(*ptr).id<<endl<<(*ptr).sallary<<endl<<(*ptr).designtion;
	
	return 0;
}
