/*7. Write a program to find out the third largest element in single pass in 1-D array.*/
#include<iostream>
using namespace std;
int main(){
int arr[10];
cout<<"enter 10 numbers"<<endl;
for(int i=0;i<10;i++){
    cin>>arr[i];
}


int j,temp;
for(int i=0;i<10;i++){

    for(j=0;j<10-i-1;j++){
            if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

            }



    }

    }

    for(int i=0;i<10;i++){
    cout<<arr[i]<<"\t";
}
cout<<"\n3 largest number :"<<arr[2];
}
