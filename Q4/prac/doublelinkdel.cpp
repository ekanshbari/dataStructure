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
int num;
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
cout<<"\n Enter the f for deletion at first and l for deletion at last";
cin>>x;
if(x=='f')
{
	p=f->next;
	f->next=NULL;
	p->prev=NULL;
	f=p;
}
if(x=='l')
{
	p=l->prev;
	l->prev=NULL;
	p->next=NULL;
	l=p;
}
if(x=='m')
{
	
}
p=f;     //forward printing
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->next;
}
}
