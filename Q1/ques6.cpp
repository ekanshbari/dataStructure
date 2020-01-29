/*6. Write a program to find no. of distinct elements in array.*/
#include<iostream>
using namespace std;
int main(){
int arr[10];
cout<<"enter 10 numbers"<<endl;
for(int i=0;i<10;i++){
    cin>>arr[i];
}
for(int i=0;i<10;i++){
        int j;
    for(j=0;j<i;j++)
        if(arr[i]==arr[j])
            break;

        if(i==j)
            cout<<arr[i]<<"\t";

    }

}
