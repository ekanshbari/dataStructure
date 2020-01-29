#include<iostream>
using namespace std;
int main()
{
int k,even_sum=0,odd_sum=0;
int a[5]={1,2,3,4,5};
 for (k = 0; k <5; k++)
    {
        if (k % 2 == 0)
            even_sum = even_sum + a[k];
        else
            odd_sum = odd_sum + a[k];
    }
    cout<<odd_sum<<endl;
    cout<<even_sum;

}
