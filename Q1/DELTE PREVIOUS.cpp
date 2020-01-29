 #include<iostream>
using namespace std;
void insert(int);
void find(int);
void del();

void traverse();
struct node
{
	int info;
	node *link;
	
}*start=NULL,*prev=NULL,*save=NULL;

int main()
{
	int i,item,item1,n;
	cout<<"enter no";
	cin>>n;
	for(i=1;i<6;i++)
	{
		cin>>item;
		insert(item);
	}
	traverse();
	cout<<"enter element";
	cin>>item1;
	find(item1);
	del();
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

void find(int item)
{
	node *p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			break;
			
		}
		else
		prev=p;
		p=p->link;
	}
}
void del()
{
	node *p=start;
	while(p!=NULL)
	{
		if(p==prev) 
		{
			save->link=prev->link;
			break;
		}
		else
		{
			p=p->link;
		}
	}
}
