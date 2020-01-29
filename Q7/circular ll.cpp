// circular link list
#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
	
}*start=NULL;

void createheader()
{
	node *p;
	p=new node;
	p->link=NULL;
	
}

void traverse(){
	node *p=start;
	while(p!=NULL){
			cout<<p->info<<"\t";
	        p=start->link;
	}
	cout<<endl;
}


void insertcll(int value)
{
	
	       node *n=new node;
		 n->info=value;
		 n->link=NULL;
		 if(start==NULL){
		start=n;
	}
	else
		{
		n->link=start;
		start=n;
		}	
}


int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	createheader();
	traverse();
	insertcll(n);
	return 0;
}
