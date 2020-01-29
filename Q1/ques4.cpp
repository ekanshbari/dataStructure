/*4. Write a program to find kth smallest/largest element in unsorted array*/
#include<iostream>
using namespace std;
int main(){
    int arr[10],i=0;
    cout<<"enter 10 elements"<<endl;
    while(i<10){
        cin>>arr[i];
        i++;
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
    cout<<"\t";
    for(int i=0 ; i<10;i++){
        cout<<arr[i]<<"\t";
    }
cout<<"enter kth element: "<<endl;
int var;
cin>>var;
cout<<"    element : "<<arr[var];
/*smallest=ar[1];
largest=ar[1];
for(i=1;i<=5;i++){
    if(ar[i]>largest)
        {
     largest=ar[i];

        }
        if(ar[i]<smallest){
            smallest=ar[i];
        }

}
cout<<"largest : "<<largest<<"\n smallest : "<<smallest;*/
return 0;
}
