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
/*p=f;     //forward printing
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->next;
}*/
p=l; //reverse printing
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->prev;
}

}
