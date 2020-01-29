#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
}*start=NULL,*loc=NULL,*locp=NULL,*start1=NULL,*start2=NULL;
void insertell(int item)
{
	node *n1=new node;
	node *ptr;
	n1->info=item;
	n1->link=NULL;
	if(start==NULL)
	{
		start=n1;
	}
	else
	{
		ptr=start;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=n1;
	}
}
void insertello(int item)
{
	node *n1=new node;
	node *ptr;
	n1->info=item;
	n1->link=NULL;
	if(start1==NULL)
	{
		start1=n1;
	}
	else
	{
		ptr=start1;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=n1;
	}
}
void insertelle(int item)
{
	node *n1=new node;
	node *ptr;
	n1->info=item;
	n1->link=NULL;
	if(start2==NULL)
	{
		start2=n1;
	}
	else
	{
		ptr=start2;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=n1;
	}
}
void odd_even()
{
	
	node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
	if((ptr->info)%2==0)
	{
	insertelle(ptr->info);
	ptr=ptr->link;
	}
	else
	{
		insertello(ptr->info);
		ptr=ptr->link;
	}}
}
void delodd(int item)
{
	node *avail;
	node *ptr;
	ptr=start;
	start=start->link;
	ptr->link=avail;
	avail=ptr;
}
void traverse()
{
	node *ptr=start;
	cout<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->link;
	}
}
void traverse1()
{
	node *ptr=start1;
	cout<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->link;
	}
}
void traverse2()
{
	node *ptr=start2;
	cout<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->info;
		ptr=ptr->link;
	}
}
int main()
{
	insertell(3);
	insertell(5);
	insertell(10);
	insertell(11);
	insertell(16);
	traverse();
	odd_even();
	cout<<endl;
	cout<<"List of odd elements:";
	traverse1();
	cout<<endl;
	cout<<"List of even elements:";
	traverse2();
	return 0;
}

