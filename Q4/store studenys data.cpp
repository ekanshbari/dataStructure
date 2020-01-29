#include<iostream>
using namespace std;
struct students
{
	int i,marks;
	char name[10];
};
int main()
{  
 struct students  std;        //structure variable
    struct students  *p; 
	p=&std;
	
	for(int k=0;k<5;k++)
	{
	
	cout<<"enter rollbo";
	cin>>p->i;
	cout<<"enter name";
	cin>>p->name;
	cout<<"enter marks";
	cin>>p->marks;
   }
   for(int k=0;k<5;k++)
   {
   	cout<<&p->i;
   	cout<<&p->marks;
   	cout<<&p->name;
   }
}
