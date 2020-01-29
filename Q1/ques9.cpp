/*9. Write a program to a accomplish following tasks in array:
a) Find frequency of each element in 1-D array.
b) Find intersection two 1-D arrays.*/
#include<iostream>
using namespace std;
void fun(int *a, int *b,int m,int n){
	for(int i=0;i<m;i++)
	{
	int j;
	for(int j=0;j<n;j++)
	{
		if(*(a+i)==*(b+j))
			break;
		if(j==n-1)
			cout<<*(a+i)<<"\t";
    }

	}
cout<<"\n";
	for(int i=0;i<m;i++)
	{
	int j;
	for(int j=0;j<n;j++)
	{
		if(*(a+i)==*(b+j)){
				cout<<*(a+i)<<"\t";

    }
	}
}}

int main(){
    int ar[10]={5,4,5,8,8,7,4,6,1,2};
      int fr[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    int count;
    for(int i=0;i<10;++i){
        count=1;
        for(int j=i+1;j<10;++j){
            if(ar[i]==ar[j]){
                count+=1;
                fr[j]=0;
            }

}

if(fr[i]!=0){
    fr[i]=count;
}
        }
        for(int i=0;i<10;++i){
     if(fr[i]!=0){

                cout<<ar[i]<<"occurs"<<fr[i]<<endl;
            }

    }

int m=10,n=7;
int ar1[m]={1,2,3,4,5,6,7,8,9,10};
int ar2[n]={1,2,3,4,0,77,7};
fun(ar1,ar2,10,7);
}
