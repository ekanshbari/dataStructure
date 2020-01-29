/*1) Write a program to ask the user for 10 integer numbers and display the even ones.*/
#include<iostream>
using namespace std;
void fun(int *,int);
int main(){
int no=10;
int ar[10],i;
for(i=0;i<10;i++){
		cin>>ar[i];
	}
	fun(ar,no);
}


void fun(int *ptr,int no){
	int i;
	for(i=0;i<no;i++){
	if(ptr[i]%2==0){
		cout<<ptr[i]<<"\t";
	}
}}
