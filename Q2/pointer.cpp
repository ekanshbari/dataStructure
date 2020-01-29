#include<iostream>
using namespace std;
int main()
{
	int i;
	char *names[]={"rohit","sandy","pradeep"};
		for(i=0;i<3;i++)
	{
		cout<<*(names+i);
	}
	return 0;
}
