#include<iostream>
#inlcude<conio.h>
using namespace std;
main()
{
int *p;
p=new int;
*p=51;
cout<<p;
delete p;
cout<<p;

}
