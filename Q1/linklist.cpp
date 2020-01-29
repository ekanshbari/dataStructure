#include<iostream>
using namespace std;

struct node{
int info;
struct node *next;
}*start=NULL;

void create();
void insertend(node *);
void insertbeg(node *);
void insertaf(node *);
void display(node *);
int deletion(node *);
void search(node *);
int main(){
if(start==NULL){
    create();
}

insertend(start);
insertbeg(start);
insertaf(start);
display(start);
search(start);
deletion(start);

}
/***********************************/
void create(){
start = new node;
cout<<"enter the values: "<<endl;
cin>>start->info;
start->next=NULL;
}
/******************/
void display(node *ptr){
while(ptr!=NULL){
    cout<<ptr->info<<"\t";
    ptr=ptr->next;
}
}
/********************************************/
void insertend(node *ptr){
while(ptr->next!=NULL){
    ptr=ptr->next;
}
node *temp=new node;
cout<<"enter last node : \n";
cin>>temp->info;
temp->next=NULL;
ptr->next=temp;

}
/**************************************/
void insertbeg(node *ptr){
node *temp = new node;
cout<<"\n enter the element for beg : ";
cin>>temp->info;
temp->next=start;
start=temp;
}
/************************************/
void insertaf(node *ptr){
int val;
node *loc;
node *temp=new node;
cout<<"enter the value u want to insert : \n";
cin>>temp->info;
cout<<"enter the values after which u want to insert : \n";
cin>>val;
while((ptr!=NULL)&&(ptr->info!=val)){
       ptr= ptr->next;
}
loc=ptr;
temp->next=ptr->next;
loc->next=temp;
}
/**********************************************/
void search(node *ptr){
if(ptr==NULL){
    cout<<"empty...............\n";
}
cout<<"\n enter the number u want to search .......\n";
int search,count=1;
cin>>search;
while((ptr->next!=NULL)&&(ptr->info!=search){

         count+=1;
    ptr=ptr->next;
}
if(ptr==NULL){
    cout<<"no is not there \n";
}
else{
    cout<<search<<"is present @ loc : "<<count;
}
}
/*******************************************/
int deletion(node *ptr){
node *ptrp=NULL;
int val;
if(ptr==NULL){
    cout<<"empty....\n";
}
cout<<"enter the value u want to delete : \n";
cin>>val;
while((ptr!=NULL)&&(ptr->info!=val)){
    ptrp=ptr;
    ptr=ptr->next;
}
if(ptr==NULL){
    cout<<"empty.........\n";
}
else if (ptrp==NULL){
    start=start->next;
}
else{
    ptrp->next=ptr->next;
}
}
