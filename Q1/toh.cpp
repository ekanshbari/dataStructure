#include<iostream>
using namespace std;
void toh(int n,char beg,char aux,char end)
{
	if(n=1)
	{
		cout<<"move"<<beg<<"-->"<<end<<"\n";
	}
	else
	{
		toh(n-1,beg,end,aux);
		cout<<"move"<<beg<<"-->"<<end<<"\n";
		toh(n-1,aux,beg,end);
	}
}
int main()
{
	int n;
	cout<<"enter no of entries";
	cin>>n;
	toh(n,'A','B','C');
	return 0;
}
