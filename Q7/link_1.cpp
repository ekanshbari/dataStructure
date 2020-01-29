#include<iostream> 
#include<conio.h> 
using namespace std; 
struct node 
{ 
       int info; 
       struct node *link; 
}; 
 
int item; 
// Function to be used.... 
void traverse(); 
void insert(); 
void insert_atstart(); 
void search(); 
void insertafter_specificloc(); 
 
void delete_first_node(); 
void delete_last_node(); 
 
struct node *head=NULL,*nptr,*ptr,*prev; 
int main() 
{ 
    int ch; 
    while(1) 
    { 
   
             
    cout<<"\n1 for traversal\n"; 
    cout<<"2 for insertion at end\n"; 
    cout<<"3 for insertion at start\n"; 
    cout<<"4 for Searching in a list\n"; 
    cout<<"5 for insert after specific element\n"; 
    cout<<"6 for delete the first node\n"; 
    cout<<"7 for delete the last node\n"; 
    cout<<"8 for exit\n"; 
    cout<<"enter your choice\n"; 
    cin>>ch; 
    switch(ch) 
    { 
              case 1: 
                   traverse(); 
                   break; 
              case 2: 
                   insert(); 
                   break; 
              case 3: 
                   insert_atstart(); 
                   break; 
              case 4: 
                   search(); 
                   break;             
              case 5: 
                   insertafter_specificloc(); 
                   break; 
              case 6: 
                   delete_first_node(); 
                   break; 
              case 7: 
                   delete_last_node(); 
                   break; 
              case 8: 
                   exit(0); 
    } 
} 
getch(); 
} 
void traverse() 
{ 
     if(head==NULL) 
     { 
                     
                    cout<<"list empty\n"; 
      
     } 
     else 
     { 
         cout<<"linked list is\n"; 
 
         ptr=head; 
         
         
         while(ptr!=NULL) 
         { 
           
          cout<<ptr->info<<"\t"; 
                                 
         ptr=ptr->link; 
         } 
          
          
     } 
      
      
} 
                    
 void insert() 
 {    
 
    if(head==NULL) 
    { 
                    
    nptr=new node; 
    cout<<"enter the info part"; 
    cin>>item; 
    nptr->info=item; 
    nptr->link=NULL; 
    head=nptr; 
    cout<<"item inserted1\n"; 
    } 
    else 
    { 
         
    nptr=new node; 
    cout<<"enter the info part"; 
    cin>>item; 
         
    ptr=head; 
    while(ptr->link!=NULL) 
        { 
    ptr=ptr->link; 
    } 
    nptr->info=item; 
    nptr->link=NULL; 
    ptr->link=nptr; 
                                
    cout<<"item inserted"; 
    } 
                                
} 
         
void insert_atstart() 
{ 
if(head==NULL) 
    { 
                    
nptr=new node; 
cout<<"enter the info part"; 
cin>>item; 
nptr->info=item; 
nptr->link=NULL; 
head=nptr; 
cout<<"item inserted1\n"; 
    } 
    else 
    { 
              
nptr=new node; 
cout<<"enter the info part\n"; 
cin>>item; 
nptr->info=item; 
nptr->link=head; 
head=nptr; 
cout<<"Item inserted at start\n"; 
    } 
    } 
         
void search() 
{ 
     int s,f=0; 
     cout<<"Enter the node to be searched"; 
     cin>>s; 
     ptr=head; 
     while(ptr!=NULL) 
     { 
     if(ptr->info==s) 
     { 
     f=1; 
     break; 
     } 
     ptr=ptr->link; 
     } 
     if(f==1) 
     cout<<"\nElement is in the list"; 
     else 
     cout<<"Element is not in the list"; 
} 
 void insertafter_specificloc() 
{ 
     int s,f=0; 
     cout<<"Enter the node after which you want to insert"; 
     cin>>s; 
     ptr=head; 
     while(ptr!=NULL) 
     { 
     if(ptr->info==s) 
     { 
     f=1; 
     break; 
     } 
ptr=ptr->link; 
     } 
     if(f==1) 
{ 
     nptr=new node; 
     cout<<"enter the info part\n"; 
     cin>>item; 
     nptr->info=item; 
          nptr->link=ptr->link; 
     ptr->link=nptr; 
     } 
 
      
     else 
     cout<<"Element is not in the list"; 
}     
void delete_first_node() 
{ 
     if(head==NULL) 
     { 
cout<<"List is empty there is no node to delete\n"; 
     } 
     else 
     { 
       ptr=head; 
     head=ptr->link; 
     cout<<"first node deleted\n"; 
          
          
     } 
} 
 
void delete_last_node() 
{ 
     if(head==NULL) 
     { 
                     
     cout<<"List is empty and no node to delete\n"; 
     } 
     else 
     { 
     ptr=head->link; 
         prev=head; 
         while(ptr->link!=NULL) 
         { 
          prev=ptr; 
         ptr=ptr->link; 
         } 
         prev->link=ptr->link; 
         cout<<"last node delete\n"<<prev; 
     } 
       
} 

