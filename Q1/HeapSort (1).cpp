#include<iostream>
#include<conio.h>
using namespace std;
int Heap[50];
int N;
void create()
{
    N=-1;
}
void insertHeap()
{
    int item; cout<<"\n Enter item value"; cin>>item;
    N=N+1;  int par;
    int ptr=N;
    while(ptr>0)
    {
        par=(ptr-1)/2;
        if(item<=Heap[par])
        {
            Heap[ptr]=item; return;
        }
        Heap[ptr]=Heap[par];
        ptr=par;
    }
    Heap[0]=item;
}
void insertHeap1(int item)
{
    //int item; cout<<"\n Enter item value"; cin>>item;
    N=N+1;  int par;
    int ptr=N;
    while(ptr>0)
    {
        par=(ptr-1)/2;
        if(item<=Heap[par])
        {
            Heap[ptr]=item; return;
        }
        Heap[ptr]=Heap[par];
        ptr=par;
    }
    Heap[0]=item;
}
void display()
{
    cout<<"\n Display \n";
    for(int i=0; i<=N;i++)
        cout<<Heap[i]<<"\t";
}
void display1(int n)
{
    cout<<"\n Display \n";
    for(int i=0; i<n;i++)
        cout<<Heap[i]<<"\t";
}
int deleteHeap()
{
    int item;
    item=Heap[0];
    int last= Heap[N];  N=N-1;
    int ptr=0,left=1,right=2;
    while(right<=N)
    {
        if((last>=Heap[left]) && (last>=Heap[right]))
        {
            Heap[ptr]=last; return item;
        }
        else if(Heap[right]<=Heap[left])
        {
            Heap[ptr]=Heap[left];ptr=left;
        }
        else
        {
            Heap[ptr]=Heap[right];ptr=right;
        }
        left=(ptr*2)+1; right=left+1;
    }
    if((left==N) && (last<Heap[left]))
    {
        Heap[ptr]=Heap[left];
        ptr=left;
    }
    Heap[ptr]=last;

return item;
}
void heapSort()
{
    create();int n,temp;
    cout<<"\n Enter number of values to enter";
    cin>>n;
    cout<<"\n Enter "<<n<<" Values";
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        insertHeap1(temp);

    }
    cout<<"\n Max Heap Constructed"<<" N= "<<N;
    display();
    cout<<"\n Applying HeapSort";
    while(N>0)
    {
        int t=deleteHeap();
        cout<<"\n deleted"<<t<<" N= "<<N;
        Heap[N+1]=t;
        cout<<"\n inserted"<<t<<" N= "<<N+1<<endl;

    }
    cout<<"\n Sorted array is:";
    display1(n);


}
int main()
{
char ch;
do{


cout<<"\n Press 1 for create";
cout<<"\n Press 2 for insert";
cout<<"\n Press 3 for Display";
cout<<"\n Press 4 for DeleteRoot";
cout<<"\n Press 5 for HeapSort";
cin>>ch;
switch(ch)
{
    case '1':  create(); break;
    case '2': insertHeap(); break;
    case '3': display();break;
    case '4': deleteHeap(); break;
    case '5':  heapSort(); break;
    default: cout<<"\n Press Valid choice";
}
cout<<"\n Enter Y/y to continue and any other key to exit";
cin>>ch;
}while(ch=='Y' || ch=='y');
    getch();
    return 0;
}
