#include<iostream>
using namespace std;
void insert(int);
void traverse();
struct node
{
	int info;
	node *link;
	
}*start=NULL;

int main()
{
	int i,item;
	cout<<"enter no";
	for(i=0;i<6;i++)
	{
		cin>>item;
		insert(item);
	}
	traverse();
}
void insert(int item)
{
	node *ptr=start;
	node *n=new node;
	n->info=item;
	n->link=NULL;
	if(start=NULL)
	start=n;
	else
	{
		while(ptr!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=n;
	}
}

void traverse()
{
	int c=0;
	node *p=start;
	while(p!=NULL)
	{
		cout<<p->info<<"\t";
		c++;
		p=p->link;
	}
	cout<<endl<<"count";
}
