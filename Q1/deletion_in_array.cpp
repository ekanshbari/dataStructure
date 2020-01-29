#include<iostream>
using namespace std;
void display(int a[], int size);

int main()
{
int size, pos, *a;
cout<<"Enter the size of array: ";
cin>>size;

    a = new int[size];
for(int i=0;i<size;i++)
    {
cout<<"Enter data value " <<i+1 <<": ";
cin>>a[i];
    }
display(a,size);

cout<<"\n Enter index position you want to delete: ";
cin>>pos;
for(int i=pos; i<(size-1); i++)
    {
a[i] = a[i+1];
    }
size--;

display(a,size);
delete []a;
return 0;
}

void display(int a[], int s)
{
cout<<"\n Values in array are: ";
for(int i=0;i<s; i++)
     {
cout<<a[i] <<"   ";
     }
}
