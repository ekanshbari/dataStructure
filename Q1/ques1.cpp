/*1. Create a C++ program to ask the user for 10 real numbers
and display the average of the positive ones
 and the average of the negative ones*/
 #include<iostream>
 using namespace std;
 int main(){
int sum=0,sum1=0,count=0,count1=0;
 int array[10];
 for(int i=0;i<10;++i){
    cin>>array[i];
    if(array[i]>=0){
        sum1=sum1+array[i];
        count1+=1;
    }
    else{
        sum=sum+array[i];
        count+=1;
    }
 }
 cout<<"average of + :"<<(sum1/count1)<<endl;
 cout<<"average of - :"<<(sum/count)<<endl;
 }
