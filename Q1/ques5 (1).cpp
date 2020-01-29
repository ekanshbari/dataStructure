/*5) Write a program to interchange two variables using pointers,
 using the concept of invoking functions by passing the pointers.*/
 #include<iostream>
 using namespace std;
 void swap(int *,int *);
 int main(){
 int x,y;
 cout<<"enter the values x and y"<<endl;
 cin>>x>>y;
 cout<<"before swap numbers are "<<x<<" and "<<y<<endl;
 swap(&x,&y);
 cout<<"after swap numbers are "<<x<<" and "<<y<<endl;

 }
void swap(int *a , int *b){
int temp=*a;
*a=*b;
*b=temp;


}
