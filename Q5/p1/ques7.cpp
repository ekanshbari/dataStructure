/*7) WAP to delete duplicate elements from an array of “n” integers.*/
#include<iostream>
using namespace std;
int main(){
int num,i,j,k;
cout<<"enter the size of array \n";
cin>>num;
int ar[num];
for(i=0;i<num;++i){
    cin>>ar[i];
}
cout<<"array before:";
for(i=0;i<num;++i){
    cout<<ar[i]<<"\t";
}

for(i=0;i<num;++i)
    for(j=i+1;j<num;){
        if(ar[i]==ar[j]){
            for(k=j;k<num-1;k++)
                ar[k]=ar[k+1];
                --num;
        }
            else{
                ++j;
            }
        }



cout<<"\n";
for(i=0;i<num;i++){
    cout<<ar[i]<<"\t";
}
}
