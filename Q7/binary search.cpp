#include<iostream>
using namespace std;
int main()
{
	int i,a[6],first=0 ,s,last=5,middle;
	cout<<"enter the array"<<endl;
	for(i=0;i<6;i++)
	cin>>a[i];
	cout<<"element to be searched";
	cin>>s;
	middle=(first+last)/2;
	while(first<last)
	{
		if(a[middle]<s)
		{
			middle=middle+1;
		}
		else if(a[middle]==s)
		{
			cout<<"element found at"<<middle;
			break;
		}
		else
		{
			middle=middle-1;
		}
	}
	if(first>last)
	{
		cout<<"element not found";
			}
}
