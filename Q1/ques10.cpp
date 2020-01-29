/*10. Write a program to find the number occurring odd number of times in array.*/
#include<iostream>
using namespace std;
int main(){
int num,count;
int *ptr1,*ptr2;
cout<<"enter the elements , u want to insert"<<endl;
cin>>num;
int arr[num];
int freq[num];
for(int i=0;i<num;++i){
    cin>>arr[i];
    freq[i]=-1;
}
ptr1=arr;
ptr2=freq;
for(int i=0;i<num;++i){
        count=1;
        for(int j=i+1;j<num;++j){
            if(ptr1[i]==ptr1[j]){
                count+=1;
                ptr2[j]=0;
            }

}

if(ptr2[i]!=0){
    ptr2[i]=count;
}
        }
for(int i=0;i<num;++i){
    if(ptr2[i]!=0){
            if(ptr2[i]%2!=0){
                cout<<ptr1[i]<<"occurs"<<ptr2[i]<<endl;
            }

    }
}

}
