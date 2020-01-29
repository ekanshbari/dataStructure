#include<iostream>
#include<string.h>
using namespace std;
void B_sorting(int a[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<"\t";
	}
}

void partition(int a[],int beg, int end,int loc)
{
	int left=beg,right=end;
	int loc=beg,flag=0;
	int temp;
	int temp1;
	while(flag==0)
	{
		while (a[loc]<=a[right] && loc!=right)
		{
			right=right-1;
		}
	}
	if(loc==right)
	{
		flag=1;
	}
	else if (a[loc]>a[right])
	{
		temp=a[loc];
		a[loc]=a[right];
		a[right]=temp;
		loc=right;		
	}
	
	if(flag==0)
	{
		while(a[loc]>=a[right] && loc!=left)
		{
			left=left+1;
		}
		if(loc==left)
		{
			flag=1;
		}
		else if(a[loc]<a[left])
		{
			temp1=a[loc];
			a[loc]=a[left];
			a[left]=temp1;
			loc=left;
		}
	}
	
}




void quicksort(int a[],int beg,int end)
{
	if(beg<end)
	{
		partition( int a[],int beg, int end,int loc);
		quicksort(int a[],int beg,int loc-1);
		quicksort(int a[],int loc+1,int end);
	}
}


void A_sorting(int a[],int size)
{
	
	cout<<endl;
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
    quicksort(a[],0,size);
	A_sorting(a,size);
}


