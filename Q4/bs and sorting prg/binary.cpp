#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int ub,lb,mid,i,n,*p,item,loc,flag;
    cout<<" !!!!!!!ENTER NUMBER OF ELEMENTS IN INPUT LIST!!!!!!    ";
    cin>>n;
    p=new int[n];
    do
    {
    flag=0;
    cout<<"\n PLEASE ENTER   "<<n<<"  VALUES IN ASCENDING SEQUENCE       ";
    for(i=0;i<n;i++)
    {
    cout<<"\n ENTER CONTENT NO."<<" "<<i+1<<"  ";
    cin>>p[i];
    }
    for(i=0;i<n-2;i++)
    {
                    if(p[i+1]<p[i])
                    flag=1;
    }
    if(flag==1)
    cout<<" YOU HAVE NOT ENTERED VALUES IN ASCENDING ORDER";
    
   } while(flag==1);
    
    
    
    cout<<"\n NOW ENTER NUMBER YOU WANT TO SEARCH  ";
    cin>>item;
    ub=n-1;
    lb=0;
    mid=(ub+lb)/2;
    while((p[mid]!=item)&&(lb<=ub))
    {
             if(p[mid]<item)
             {
                    lb=mid+1;
             }
             else
             {
                    ub=mid-1;
             }
             mid=(ub+lb)/2;
    }        
    if(p[mid]==item)
    {
       loc=mid;
       cout<<"\n NUMBER FOUND AT POSITION "<<loc+1;
    }  
    else
    {
    cout<<" SORRY!! ELEMENT NOT FOUND IN LIST";
}
    getch();
}                                
    
