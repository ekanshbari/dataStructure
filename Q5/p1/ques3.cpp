/*3) Write a program to calculate sum and average of all element of 2-D array.*/
#include<iostream>
using namespace std;
int r, c=0;
void print(int a[][3]);
int main() {
     cin>>r>>c;
      int arr[r][3];
      for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) {
                cin>>arr[i][j]; } }
      print(arr);


      }

void print(int a[][3])
{
    int sum=0,count=0;
    for(int i=0; i<r;i++)
{
     for(int j=0; j<c; j++)
{
    cout<<a[i][j]<<" ";
    sum=sum+a[i][j];
    count+=1;

}
cout<<endl;
}
cout<<"sum : "<<sum<<endl<<"average: "<<sum/count;
 }
