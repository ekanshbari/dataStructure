#include<iostream>
using namespace std;
struct node{
	int info;
	node *link;
}*start=NULL;
void insertB(int);
void end(int);
void traverse();
int main(){
	int n,item,end1;
	cout<<"enter the number of elemenets"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		int item1;
		insertB(item1);
	}
	cout<<"enter the element 4 beginning"<<endl;
	cin>>item;
	insertB(item);
	cout<<"enter the element @ end"<<endl;
	cin>>end1;
	end(end1);
	traverse();
}
void traverse() 
{ 
   node *p=start;
   while(p!=NULL){
   	cout<<p->info<<endl;
   	p=p->link;
   }
      
} 
            
void insertB(int i){
	node *n=new node;
	n->info=i;
	n->link=NULL;
	if(start==NULL){
		start=n;
	}
	else{
		n->link=start;
		start=n;
		
	}
}
void end(int end1){
	node *p=start;
	node *p1=new node;
	p1->info=end1;
	p1->link=NULL;
	while(p->link!=NULL){
		p=p->link;
	}p->link=p1;
	}
	

