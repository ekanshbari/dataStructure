#include<iostream>
using namespace std;
struct node
{
	int info;
	struct node *link;
}*start=NULL;

void traverse()
{
	node *ptr=start;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->link;
	}
	
}

int main()
{
	int n,element[20];
	cout<<"enter number of elements "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>element[i];
	}
	
	traverse();
}
