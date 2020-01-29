#include<iostream>
using namespace std;

struct node{
    int info;
    node *link;
};

node *start = NULL;

void create_ll()
{
    int num;
    node *new_node,*ptr;
    cout<<"\nEnter -1 to end";
    cout<<"\nEnter the data: ";


    while(num != -1)
    {
        cin>>num;
        new_node = new node;
        new_node->info = num;
        new_node->link=NULL;

        if(start == NULL)
        {
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr->link!=NULL)
                ptr=ptr->link;
            ptr->link=new_node;
        }
    }
}

void display()
{
    node *ptr=start;
    if(ptr == NULL)
        cout<<"List is Empty.\n";
    else
        while(ptr != NULL){
            cout<<"\t"<<ptr->info;
            ptr = ptr->link;
        }
}

void insert_beg()
{
    node *new_node = new node;
    int num;
    cout<<"Enter the data : ";
    cin>>num;
    new_node->info=num;
    new_node->link=NULL;
    new_node->link = start;
    start = new_node;
}

void insert_end()
{
    int num;
    node *new_node=new node,*ptr=start;
    cout<<"\nEnter the data : ";
    cin>>num;
    new_node->info=num;
    new_node->link=NULL;
    while(ptr->link!=NULL)
        ptr=ptr->link;
    ptr->link=new_node;
}

void insert_before()
{
    node *new_node=new node,*ptr,*prev;
    int num,val;
    cout<<"\nEnter the data : ";
    cin>>num;
    cout<<"\nEnter the value before which the data has to be entered : ";
    cin>>val;
    new_node->info=num;
    ptr=start;
    prev=NULL;
    while(ptr->info != val)
    {
        prev = ptr;
        ptr=ptr->link;
    }
    prev->link=new_node;
    new_node->link=ptr;
}

void insert_after()
{
    node *new_node=new node,*ptr,*prev;
    int num,val;
    cout<<"\nEnter the data : ";
    cin>>num;
    cout<<"\nEnter the value after which the data has to be entered : ";
    cin>>val;
    new_node->info=num;
    ptr=start;
    prev=ptr;
    while(prev->info != val)
    {
        prev = ptr;
        ptr=ptr->link;
    }
    prev->link=new_node;
    new_node->link=ptr;
}

void delete_beg()
{
    node *ptr = start;
    start = start->link;
    delete(ptr);
}

void delete_end()
{
    node *ptr=start,*prev;
    while(ptr->link!=NULL)
    {
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link=NULL;
    delete(ptr);
}

void delete_node()
{
    node *ptr,*prev;
    int val;
    cout<<"Enter the value of the node which has to be deleted : ";
    cin>>val;
    ptr=start;
    if(ptr->info==val)
    {
        start = start->link;
        delete(ptr);
    }
    else
    {
        while(ptr->info!=val)
        {
            prev=ptr;
            ptr=ptr->link;
        }
        prev->link=ptr->link;
        delete(ptr);
    }
}

void sort_list()
{
	node *ptr1,*ptr2;
	int temp;
	ptr1=start;
	while(ptr1->link!=NULL)
	{
		ptr2=ptr1->link;
		while(ptr2!=NULL)
		{
			if(ptr1->info>ptr2->info)
			{
				temp = ptr1->info;
				ptr1->info = ptr2->info;
				ptr2->info = temp;
			}
			ptr2 = ptr2->link;
		}
		ptr1 = ptr1->link;
	}
}

node* search_list()
{
	int item,count;
	cout<<"Enter the data to be searched : ";
	cin>>item;
	node *loc,*ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->info==item)
		{
			loc=ptr;
			count+=1;
			cout<<"\nPosition in a list: "<<count<<"\nMemory Address : "<<loc;
			return loc;
		}
		else
		{
			ptr=ptr->link;
			count+=1;
		}
		
	}
	loc=NULL;
	return loc;
}


int main(){
    int option;
    do {
        cout<<("\n\n *****MAIN MENU *****");
        cout<<("\n 1:  Create a list");
        cout<<("\n 2:  Display the list");
        cout<<("\n 3:  Add a node at the beginning");
        cout<<("\n 4:  Add a node at the end");
        cout<<("\n 5:  Add a node before a given node");
        cout<<("\n 6:  Add a node after a given node");
        cout<<("\n 7:  Delete a node from the beginning");
        cout<<("\n 8:  Delete a node from the end");
        cout<<("\n 9:  Delete a given node");
        //cout<<("\n 10: Delete a node after a given node");
        cout<<("\n 11: Search a data ");
        cout<<("\n 12: Sort the list");
        cout<<("\n 13: EXIT");
        cout<<("\n\nEnter your option : ");
        cin>>option;
        switch(option)  {
            case 1:
                create_ll();
                cout<<("\n LINKED LIST CREATED");
                break;
            case 2:
                display();
                break;
            case 3:
                insert_beg();
                break;
            case 4:
                insert_end();
                break;
            case 5:
                insert_before();
                break;
            case 6:
                insert_after();
                break;
            case 7:
                delete_beg();
                break;
            case 8:
                delete_end();
                break;
            case 9:
                delete_node();
                break;
            case 10:
                //delete_after();
                break;
            case 11:
                search_list();
                break;
            case 12:
                sort_list();
                break;}}
    while(option !=13);
    return 0;

}
