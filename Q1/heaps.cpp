#include<iostream>
using namespace std;
int heap[20],n=0,item;
void insert_heap(int item){
	n=n+1;
	int ptr=n;
	while(ptr>1){
		int par=ptr/2;
		if(item<=heap[par]){
			heap[ptr]=item;
			return;
		}
		heap[ptr]=heap[par];
		ptr=par;
	}
	heap[1]=item;
	return;
}
void display(){
	for(int i=1;i<=n;i++){
		cout<<heap[i];
	}
}
void delete_heap(int item){
	int ptr=1,last=heap[n],n=n-1,left=2,right=3;
	item=heap[1];
	while(right<=n){
		if(last>heap[left] && last>heap[right]){
			heap[ptr]=last;
			return;
		}
		if(heap[left]>heap[right]){
			heap[ptr]=heap[left];
			ptr=left;
		}
		else{
			heap[ptr]=heap[right];
			ptr=right;
		}
		left=ptr*2;
		right=left+1;
	}
	if(left==n){
		if(heap[left]>last){
			heap[ptr]=heap[left];
			ptr=left;
		}
	}
	heap[ptr]=last;
	return;
}
void heap_sort(){
	for(int j=1;j++;j<=n-1){
		insert_heap(heap[j+1]);
	}
	while(n>1){
		delete_heap(item);
		heap[n+1]=item;
	}
}
main()
{
	
	insert_heap(2);
	insert_heap(3);
	insert_heap(9);
	insert_heap(6);
	insert_heap(4);
	display();
	cout<<endl;
	delete_heap(item);
	display();
	heap_sort();
	display();
	
	
}
