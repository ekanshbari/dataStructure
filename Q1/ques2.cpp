/*2. Write a program to calculate sum and
 average of all element of 2-D array.*/
 #include<iostream>
 using namespace std;
 void cal(int array[][10],int,int);
 int main(){
 int r,c;
 cout<<"enter row and col respectively"<<endl;
 cin>>r>>c;
 int array[r][10];
 for(int i=0;i<r;++i){
    for(int j=0;j<c;++j){
        cin>>array[i][j];
    }
 }
 cal(array,r,c);
 }
 void cal(int array[][10],int r,int c){
     int count=0,sum=0;
 for(int i=0;i<r;++i){
    for(int j=0;j<c;++j){
        sum=sum+array[i][j];
        count+=1;
    }
 }
 cout<<"sum :"<<sum<<endl;
 float average=(sum/count);
 cout<<"average : "<<average;
 }
