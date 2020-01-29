#include<iostream>
#include<conio.h>
using namespace std;
main()
{

	int **a=new int *[3],i,j;
	for(i=0;i<3;i++)
	a[i]=new int[3];
	
     for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
     {
     cin>>a[i][j];
	 }
     }
     for(i=0;i<3;i++)
     {
     for(j=0;j<3;j++)
     {
     cout<<a[i][j];
	 }
     }
     
	delete a;
}
