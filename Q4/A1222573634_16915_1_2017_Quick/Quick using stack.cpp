#include<conio.h>
#include<iostream>
using namespace std;
int quick(int q[],int lt,int rt ,int lc){
int temp;
lc=lt;
l1:
while((q[lc]<=q[rt])&&(lc!=rt)){
rt=rt-1;
}
if(lc==rt){
return lc ;
}
if(q[lc]>q[rt]){
    temp=q[rt];
    q[rt]=q[lc];
    q[lc]=temp;
    lc=rt;
    }
    while((q[lc]>=q[lt])&&(lc!=lt)){
    lt=lt+1;
    }
    if(lc==lt){
    return lc;}
    if(q[lc]<q[lt]){
    temp=q[lt];
    q[lt]=q[lc];
    q[lc]=temp;
    lc=lt;
    }
    goto l1;
    }


int main(){

int b,e,l=0, n;
cout<<"enter size"<<endl;
cin>>n;
int q[n], ls[n/2], us[n/2];
cout<<"enter elements"<<endl;
for(int i=0;i<n;i++){
cin>>q[i];
}
cout<<"enterd elements are "<<endl;
for(int i=0;i<n;i++){
cout<<q[i]<<"\t";
 }
 cout<<endl;
 int sp=-1;
 if(n>1 )
 {
 sp=sp+1;
 ls[sp]=0;
 us[sp]=n-1;
 }
 while(sp!=-1){
     b=ls[sp];
     e=us[sp];
     sp=sp-1;
     l=quick(q,b,e,l);
     if( b<l-1){
     sp=sp+1;
     ls[sp]=b;
     us[sp]=l-1;
     }
     if(e>l+1){
     sp=sp+1;
     ls[sp]=l+1;
     us[sp]=e;
     }
     }
     cout<<"sorted" <<endl;
     for(int i=0;i<n;i++){
     cout<<q[i]<<"\t";
     }

 getch();
 return 0;
 }
