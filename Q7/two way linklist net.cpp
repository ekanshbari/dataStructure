#include<iostream>
#include<string.h>
using namespace std;
 
struct node
{
    int a;
    node *previous;
    node *next;
};
 
 struct node *head=NULL;
 struct node *tail=NULL;
 
int insert_in_first()
{
    node *tmp=new node;
    cout<<"\ninput a.\n";
    cin>>tmp->a;
        if(head==NULL)
        {
            tmp->next=NULL;
            tmp->previous=NULL;
            head=tmp;
            tail=head;
        }
        else
        {
            tmp->next=head;
            tmp->previous=NULL;
            head->previous=tmp;
            head=tmp;
        }
        return 0;
}
 
int traverse_form_head()
{
    node *tmp=new node;
    tmp=head;
    if (tmp==NULL)
    {
        cout<<"\nnothing for traverse\n";
        return 0;
    }
    while(tmp!=NULL)
    {
        cout<<"a="<<tmp->a<<"\n";
        tmp=tmp->next;
    }
    return 0;
}
 

int traverse_form_tail()
{
    node *tmp=new node;
    tmp=tail;
    if (tmp==NULL)
    {
        cout<<"\nnothing for traverse\n";
        return 0;
    }
    while(tmp!=NULL)
    {
        cout<<"a="<<tmp->a<<"\n";
        tmp=tmp->previous;
    }
    return 0;
}
 
int insert_at_last()
{
    node *tmp=new node;
    node *tmp1=new node;
    tmp=tail;
    if (tmp==NULL)
    {
        cout<<"\nthere is no element\n";
        return 0;
    }
    else
    {
        cout<<"\nimput a\n";
        cin>>tmp1->a;
        tmp1->next=NULL;
        tmp1->previous=tmp;
        tmp->next=tmp1;
        tmp=tmp1;
    }
    return 0;
}
 

int main()
{
    int i;
    do
    {
        cout<<"\nimput 1 for first insert\ninput 2 for traverse from head\ninput 3 for traverse from tail\ninput 4 for last insert\ninput 9 for break\n";
        cin>>i;
        switch(i)
        {
            case 1:
            insert_in_first();
            break;
            case 2:
            traverse_form_head();
            break;
            case 3:
            traverse_form_tail();
            break;
            case 4:
            insert_at_last();
            break;
 
            case 9:
            break;
 
        }
    }
    while (i!=9);
    return 0;
}
