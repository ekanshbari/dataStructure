#include<iostream>
#include<conio.h>
using namespace std;
main()
{
int **x=new int*[3],i,j;
for(int i=0;i<3;i++)
x[i]=new int[3];

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>x[i][j];
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<x[i][j]<<" ";
}
cout<<endl;
}   		
}
