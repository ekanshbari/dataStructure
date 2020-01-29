#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct node
{
	int data;
	node *prev;
	node *next;
	
};
int main()
{
char x;
node *f=NULL,*l=NULL,*n,*p;
cout<<"Enter the values of linked list ending with -1  :";
int num,y;
cin>>num;
while(num!=-1)
{
	n=new node;
	n->data=num;
	n->prev=NULL;
	n->next=NULL;
	if(f==NULL)
	{
	 f=n;
	 l=n;	
	}
	else
	{ 
	l->next=n;
	n->prev=l;
	l=n;
		
	}
	cin>>num;
}
p=f;     //forward printing
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->next;
}
cout<<"\n Enter the f for insertion at first and l for insertion at last";
cin>>x;
cout<<"Enter the element you want to insert";
cin>>y;
if(x=='f')
{
	n=new node;
	n->data=y;
	n->prev=NULL;
	n->next=f;
	f=n;
}
if(x=='l')
{
	n=new node;
	n->data=y;
	n->next=NULL;
	l->next=n;
	n->prev=l;
	l=n;
}
if(x=='m')
{
	n=new node;
	n->data=y;
	cout<<"enter pos you want to enter";
	int c,l=1;
	cin>>c;
	p=f;
	while(l!=c)
	{
	p=p->next;
	p++;
		
	}
	
}
p=f;     //forward printing
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->next;
}
}
