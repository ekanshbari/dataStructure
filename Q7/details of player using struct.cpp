#include<iostream>
using namespace std;
struct player
{
	int id;
	char name[20];
	int run;
	char grade;	
	
	void fun(char z)
{
	int i,n,sum=0,a[10];
	char g,c=1;
	float avg;
	cout<<"enter the grade"<<endl;
	cin>>g;
	for(i=0;i<n;i++)
	{
	if(g=='A'){
	c++;
	sum=sum+a[i];
	avg=sum/c;}
	else
	c=1;
}
	cout<<avg;
	
}
};
int main()
{
	player p,*x;
	x=&p;
	int n,i;
	cout<<"enter no to display details of player";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter id"<<endl;
		cin>>p.id;
		cout<<"enter name"<<endl;
		cin>>p.name;
		cout<<"enter run"<<endl;
		cin>>p.run;
		cout<<"enter grade"<<endl;
		cin>>p.grade;
	}
	
		for(i=0;i<n;i++){
		cout<<x->id<<endl<<x->name<<endl<<x->run<<endl<<x->grade<<endl;
		
}
p.fun('A');
}





