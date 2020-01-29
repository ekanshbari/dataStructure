#include<iostream>
#include<stdlib.h>
using namespace std;
int rear,front,n;
int *q=new int[n];
void push()
{
	int item;
	cin>>item;
	if((front==0&&rear==n-1)||front==rear+1)
	{
		cout<<"over flow";
	}
	else if(front==1)
	{
		front=rear=0;
	}
	else if(rear==n-1)
	{
		rear=0;
	}
	else
	{
		rear++;
	}
	q[rear]=item;
}
void pop()
{
	if(front==-1)
	{
		cout<<"under flow";
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else if(front==n-1)
	{
		front=0
	}
	else
	{
		front++;
	}
}
void peek()
{
	int p=front;
	cout<<q[p];
	while(p!=rear)
	{
		if(p==n-1)
		{
			p=0
		}
		else
		{
			p++;
		}
		cout<<q[p];
	}
}
int main()
{
	rear=-1;front=-1;
	cin>>n;
	while(1)
	{
		int ch;
		cout<<"\n 1. push \n";
		cout<<"\n 2. pop \n";
		cout<<"\n 3. peek \n";
		cout<<"\n 4. exit \n";
		cout<<"enter the choice\n";
		cin>>ch;
		switch(ch)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:peek();break;
			case 4:exit(0);break;
		}
	}
	return 0;
}
