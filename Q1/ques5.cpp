/*5. Write a program to find no. of even and odd nos. in array.*/
#include<iostream>
using namespace std;
void evenodd();
int main(){
evenodd();
}
void evenodd(){
cout<<"enter how many numbers u want to enter"<<endl;
int num,i=1;
cin>>num;
int arr[num];
while(i<=num){
    cin>>arr[i];
    i++;
}
int counteven=0,countodd=0;
for(i=1;i<=num;i++){
    if(arr[i]%2==0){
        counteven+=1;
    }
    else{
        countodd+=1;
    }

}
cout<<"even :"<<counteven<<"\n odd:"<<countodd;
}
