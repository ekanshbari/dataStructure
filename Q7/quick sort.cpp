#include<iostream>
using namespace std;
void B_sorting(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	int size;
	cout<<"enter size of array"<<endl;
	cin>>size;
	int a[size];
	cout<<"enter elements of array"<<endl;
	for (int i=0;i<size;i++)
	{
		cin>>a[i];	
	}		
	cout<<"before sorting array is"<<endl;
	B_sorting(a,size);
	
}


