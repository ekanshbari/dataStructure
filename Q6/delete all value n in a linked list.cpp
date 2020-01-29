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

//delete at position n
void deleteAtLoc(int item)
{
	node *ptr=start,*prev=NULL;
	while(ptr!= NULL)
	{
		if(ptr->info==item)
		{
			if(prev==NULL)
			{
				start=ptr->link;
			}
			prev->link=ptr->link;			
		}		
		prev=ptr;
		ptr=ptr->link;
	}		
}

int main()
{
    int n;
	insertAtEnd(1);
	insertAtEnd(2);
	insertAtEnd(3);
	insertAtEnd(2);
	insertAtEnd(4);
	insertAtEnd(9);
	insertAtEnd(7);
	insertAtEnd(2);
    traverse();
    cout<<endl;
    cout<<"Enter the Element you want to delete : ";
    cin>>n;
    deleteAtLoc(n); 
	traverse();   
}
