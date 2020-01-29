#include<iostream>
using namespace std;
/*structure for linklist*/
struct node{
	int info;
	node *link;
}*start=NULL,*loc=NULL,*locp=NULL;//global pointer
/* traversing elements*/
void traverse(){
	node *p=start;
	while(p!=NULL){
			cout<<p->info<<"\t";
	        p=p->link;
	}
	cout<<endl;
}
/*inserting at beginning*/
void insertbeg(int item){
         node *n=new node;
		 n->info=item;
		 n->link=NULL;
		 if(start==NULL){
		start=n;
	}
	else{
		n->link=start;
		start=n;
		
	}	
}
/* inserting at end*/
void insertend(int item){
	node *p=start;
	node *p1=new node;
	p1->info=item;
	p1->link=NULL;
	while(p->link!=NULL){
		p=p->link;
	}p->link=p1;
	}
/*searching element*/
void search(int item){
	node *p=start;
	int count=1;
	while(p!=NULL){
		if(p->info==item){
			cout<<"element present @ loc"<<p<<"and node no is"<<count<<endl;
			
		}
	/*	else{
			cout<<"element not present"<<endl;
		}*/
			
	        p=p->link;
	        count+=1;
	}
	cout<<endl;
	
}
void insert_locb(int item){
}
void insert_loca(int item){
}
int main(){
	int number,i,item,itemb,iteme,khoj;
	cout<<"enter the number of elements , for inseration from beginning"<<endl;
	cin>>number;
	cout<<"enter the "<<number<<" elements"<<endl;
        	for(i=0;i<number;i++){
	              	cin>>item;
	            	insertbeg(item);
		
                    	}
	traverse();
	cout<<"enter the element for beginning"<<endl;
	cin>>itemb;
	insertbeg(itemb);
	traverse();
	cout<<"enter the element for ending"<<endl;
	cin>>iteme;
	insertend(iteme);
	traverse();
	cout<<"enter the element which , u want search"<<endl;
	cin>>khoj;
	search(khoj);
	cout<<"";
	
}
