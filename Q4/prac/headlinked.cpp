
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
node *f,*l,*n,*p; //Here f is head
int c=0;
n=new node;
n->next=NULL;
f=n;
l=n;
cout<<"Enter the values of linked list ending with -1  :";
int num;
cin>>num;
while(num!=-1)
{
	n=new node;
	n->data=num;
	n->next=NULL;
	l->next=n;
	l=n;
	cin>>num;
	c=c+1;
}
f->data=c;
p=f->next;
cout<<" size "<<f->data<<"\n";
while(p!=NULL)
{
	cout<<p->data<<" -> ";
	p=p->next;
}
}
