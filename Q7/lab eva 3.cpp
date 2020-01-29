 #include<iostream>
 using namespace std;
struct node
 {
 	int info;
 	struct node *next;
 	 struct node *prev;
 	
 };
 
 struct node *start=NULL;
 struct node *ptr;
 struct node *prev;
 
 
struct node *create_tll(struct node *)
{
	 node *tmp=new node;
	 

        if(start==NULL)
        {
            tmp->next=NULL;
            tmp->prev=NULL;
            ptr=tmp;
            prev=ptr;
        }
        else
        {
            tmp->next=ptr;
            tmp->prev=NULL;
            ptr->prev=tmp;
            ptr=tmp;
        }
        return start;
}
struct node *delete(struct node *)
{
	if (start == NULL)
        return ;
    struct Node *prev = ptr;
    struct Node *ptr = ptr->next;
 
    while (prev != NULL && node != NULL)
    {
        
        if(ptr->data%4==0)
        {
        	prev->next = ptr->next;
		}
        free(node);
 
        prev = prev->next;
 
        
    }
return start;
}
struct node *display(struct node *)
{
	while (node != NULL)
    {
        cout<<node->data;
        node = node->next;
    }
    return start;
 } 

int main()
{
	struct Node* ptr = NULL;
	int option;
	do
	{
		cout<<"\n enter the no. to perform task";
		cout<<"\n 1.create ll";
		cout<<"\n 2.delete ";
		cout<<"\n 3.display";
		cout<<"\n 4.exit";
		cout<<"\n enter the no. to perform task";
		cin>>option;
		switch(option)
		{
			case 1: start=create_ll(start);
			cout<<"\n list created";
			break;
			case 2: start=delete(start);
			break;
			case 3: start=display(start);
			cout<<"\n list is";
		}while(option!=4)
		return 0;
		
	}
}
