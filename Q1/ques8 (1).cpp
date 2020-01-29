/*8) WAP that returns the sum of the elements in a specific row of an array.
 The array, number of filled-in columns and
 which row is to be totaled should be passed as parameters.*/
#include<iostream>
using namespace std;

void result(int ar[][3],int , int);
int main(){
int i,j,sum=0;
cout<<"enter i and j values"<<endl;
cin>>i>>j;
int ar[i][3];
for(int a=0;a<i;++a){
    for(int b=0;b<j;++b){
        cin>>ar[a][b];
    }
}

for(int a=0;a<i;++a){
    for(int b=0;b<j;++b){
        cout<<ar[a][b]<<"\t";
    }
    cout<<"\n";
}

cout<<"enter tha row u want to sum"<<endl;
int row;
cin>>row;
row-=1;
 result(ar,row,j);

}

void result(int ar[][3],int row,int j){

int sum=0;
for(int a=row;a<row+1;++a){
    for(int b=0;b<j;++b){
        sum=sum+ar[a][b];
    }
}
cout<<"sum:"<<sum;

}
