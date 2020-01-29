/*4) Write a program to ask the user
for 10 real numbers and display the average of the
positive ones and the average of the negative ones.*/
#include<iostream>
using namespace std;

void print(int *,int);
int main() {
    cout<<"enter size of array"<<endl;
    int n;
    cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      print(arr,n);


      }

void print(int *ar,int n)
{
    int sum1=0,sum2=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(ar[i]>=0){

            sum1=sum1+ar[i];
            count1+=1;
        }
        else{
            sum2=sum2+ar[i];
            count2+=1;        }
     }
     cout<<"average of + : "<<sum1/count1<<endl;
     cout<<"average of - : "<<sum2/count2<<endl;
 }

