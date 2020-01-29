#include<iostream>
using namespace std;
int main()
{
int n, *a;
cout<<"Enter size of array:";
cin>>n;
    a = new int[n];
for(int i=0; i<n; i++)
    {
cout<<"Enter value: ";
cin>>a[i];
    }

cout<<"Elements entered are:" <<endl;
for(int i=0; i<n; i++)
    {
cout<<a[i] <<"   ";
    }

int temp;
for(int i=0; i<(n-1); i++)
    {
for(int j=0; j<(n-1); j++)
        {
if(a[j]>a[j+1])
                 {
temp = a[j];
a[j]= a[j+1];
a[j+1] = temp;
                 }
        }
    }

cout<<"\n Sorted entered are:" <<endl;
for(int i=0; i<n; i++)
    {
cout<<a[i] <<"   ";
    }
return 0;
}

