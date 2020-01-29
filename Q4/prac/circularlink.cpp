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
   node *f=NULL,*l=NULL,*p,*n;
   cout<<"Enter the values of LL ending with -1";
   int num;
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
	  {
	  	l->next=n;
	  	l=n;
	  }	
	  cin>>num;
	}
	l->next=f;
	p=f;
	while(p->next!=f)
{
	cout<<p->data<<" -> ";
	p=p->next;
}	
cout<<"last data :"
cout<<p->data;
 }
