/*8. Write a program to merge 2 arrays in such a way that final array is sorted*/
#include<iostream>
using namespace std;
int main(){
int num1,num2,i,j;
cout<<"enter the size of first and second array : "<<endl;
cin>>num1>>num2;
int ar1[num1],ar2[num2],z;
z=num1+num2;
int ar3[z];
for(i=0;i<num1;++i){
    cin>>ar1[i];
}
for(j=0;j<num2;j++){
    cin>>ar2[j];
}
for(i=0;i<num1;++i){
    ar3[i]=ar1[i];

}
for(i=0,j=num1;j<z&&i<num2;i++,j++){
    ar3[j]=ar2[i];
}

//sorting array...........
for(int i=0;i<z;i++){

    for(j=0;j<z-i-1;j++){
            if(ar3[j]>ar3[j+1]){
                   int temp=ar3[j];
                    ar3[j]=ar3[j+1];
                    ar3[j+1]=temp;

            }



    }

    }
cout<<"merge array : ";
for(i=0;i<z;++i){
    cout<<ar3[i]<<"\t";
}

}
