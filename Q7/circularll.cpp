#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
}*start=NULL;
void createheader()
{
	node *n1=new node;
	n1->info=0;
	n1->link=NULL;
	start=n1;
}
void insertendcll(int item)
{
	node *n1=new node; node*ptr;
	n1->info=item;
	n1->link=NULL;
	if(start==NULL)
	{
		createheader();
	}
	
		if(start->link==NULL)
			{
			start->link=n1; n1->link=start;
			}
		else
		{ ptr=start->link;
			while(ptr->link!=start)
			{
				ptr=ptr->link;
			}
			ptr->link=n1;
			n1->link=start;
		}
		start->info+=1;
	}

void insertbegcll(int item)
{
	node *n1=new node;
	n1->info=item;
	n1->link=NULL;
	if(start==NULL)
	{
		createheader();
		
	}
	if(start->link==NULL)
		{
		start->link=n1;
		n1->link=start;
	}
	else
	{
		n1->link=start->link;
		start->link=n1;
	}
	start->info+=1;
}
void traverse()
{
	node *ptr=start->link;
	while(ptr!=start)
	{
		cout<<ptr->info;
		ptr=ptr->link;
	}
}
main()
{
	insertbegcll(5);
	insertendcll(10);
	insertendcll(15);
	insertbegcll(20);
	traverse();
	cout<<"\n total: "<<start->info;
}
