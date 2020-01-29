#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct node
{
	int data;
	node *next;
	
};
int main()
{
node *f=NULL,*l=NULL,*n,*p,*q,*r;
cout<<"Enter the values of linked list ending with -1  :";
int num,num1,s,x,y;
cin>>num;
while(num!=-1)
{
	n=new node;
	n->data=num;
	n->next=NULL;
	if(f==NULL)
	{
	 f=n;
	 l=n;	
	}
	else
	{ l->next=n;
	  l=n;	
	}
	cin>>num;
}
/*
cout<<"enter the position you want to insert  first 1 , last 2 ,b/w 3  : ";
cin>>s;
cout<<"enter the element you want to insert : ";
cin>>num1;
if(s==1)
{
n=new node;
n->data=num1;
n->next=f;
f=n;
}
if(s==2)
{
n=new node;
n->data=num1;
l->next=n;
l=n;
l->next=NULL;
}
if(s==3)
{
cout<<"enter the position you want to insert :  ";
int a,b=1;
cin>>a;
p=f;
n=new node;
while(p!=NULL)
{
	if(b==a-1)
	{
		r=p->next;
		p->next=n;
		n->next=r;
		n->data=num1;
		break;
	}
	else
	{
		p=p->next;
		
	}
	b++;
	
}	
}*/
cout<<"enter the position you want to delete  first 1 , last 2 ,b/w 3  : ";
cin>>x;
if(x==1)
{
p=f;
f=p->next;
p->data=NULL;
p=f;
}
if(x==2)
{
p=l-1;


	
}
p=f;
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->next;
}

}
