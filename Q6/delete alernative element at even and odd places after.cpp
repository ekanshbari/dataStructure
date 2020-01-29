#include<iostream>
using namespace std;

struct node{
	int info;
	node *link;
};

node *start=NULL;
//insert
void insertAtEnd(int item){
    node *n1=new node;
    n1->info=item;
    n1->link=NULL;
    node *ptr=start;
    if(start==NULL)
    {
        start=n1;
    }
    else
    {
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=n1;
    }
}

//traverse linked list
void traverse()
{
    node *ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
}

//delete at position even
void deleteEven()
{
	node *ptr,*prev,*temp;
	prev=start;
	ptr=start->link;
	while(ptr!=NULL)
	{
		if(prev!=NULL)
		{
			temp=ptr;
			prev->link=ptr->link;
		}
		prev=ptr->link;
		ptr=ptr->link->link;
		delete(temp);
	}
}

//delete at position odd
void deleteOdd()
{
	node *ptr,*prev,*temp;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr==start)
		{
			temp=ptr;
			start=ptr->link;
		}
		else if(ptr->link==NULL)
		{
			temp=ptr;
			prev->link=NULL;
			break;
		}
		else
		{
			temp=ptr;
			prev->link=ptr->link;			
		}
		prev=ptr->link;
		ptr=ptr->link->link;
		delete(temp);
	}
}

int main()
{
    int n;
	for(int i=1;i<10;i++)
    {
    	insertAtEnd(i);
	}
    traverse();
    cout<<endl;
    deleteEven();  
    traverse();
    cout<<endl;
    deleteOdd();
    traverse();    
}
