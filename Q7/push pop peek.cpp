    //Write a program to perform Push, Pop, and Peek operations on a stack by array.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#define MAX 3 // Altering this value changes size of stack created
using namespace std;
int st[MAX], top=-1;
void push(int st[], int val);
int pop(int st[]);
int peek(int st[]);
void display(int st[]);
int main() {
int val, option;
do
{
cout<<"\n *****MAIN MENU*****";
cout<<"\n 1. PUSH";
cout<<"\n 2. POP";
cout<<"\n 3. PEEK";
cout<<"\n 4. DISPLAY";
cout<<"\n 5. EXIT";
cout<<"\n Enter your option: ";
cin>>option;
switch(option)
{
case 1:
cout<<"\n Enter the number to be pushed on stack: ";
cin>>val;
push(st, val);
break;
case 2:
val = pop(st);
if(val != -1)
cout<<"\n The value deleted from stack is: %d"<<val;
break;
case 3:
val = peek(st);
if(val != -1)
cout<<"\n The value stored at top of stack is: %d"<<val;
break;
case 4:
display(st);
break;
}
}while(option != 5);
return 0;
}
void push(int st[], int val)
{
if(top == MAX-1)
{
cout<<"\n STACK OVERFLOW";
}
else
{
top++;
st[top] = val;
}
}
int pop(int st[])
{
int val;
if(top == -1)
{
cout<<"\n STACK UNDERFLOW";
return -1;
}
else
{
val = st[top];
top--;
return val;
}
}
void display(int st[])
{
int i;
if(top == -1)
cout<<"\n STACK IS EMPTY";
else
{
for(i=top;i>=0;i--)
cout<<"\n %d"<<st[i];
cout<<"\n"; // Added for formatting purposes
}
}
int peek(int st[])
{
if(top == -1)
{
cout<<"\n STACK IS EMPTY";
return -1;
}
else
return (st[top]);
}



/* #include<iostream.h>
#include<conio.h>
#include<stdlib.h>

int max,i,n;
int top=-1;
class stack
{
int s[20];
public:
void push();
void pop();
void display();
};
void stack::push()
{
int x;
if(top==(max-1))
cout<<"Stack is full";
else
{
cout<<"enter data:";
cin>>x;
top=top+1;
s[top]=x;
}}
void stack::pop()
{
if(top==-1)
cout<<"stack  is empty";
else
s[top--]='\0';
}void stack::display()
{cout<<"displaying the contents of stack:\n";
if(top==-1)
cout<<"stack is empty"<<"\n";
else
{for(i=0;i<=top;i++)
cout<<s[i]<<"\t";
cout<<"\n";
}}
void main()
{
stack sa;
clrscr();
cout<<"enter the range:";
cin>>max;
while(1)
{
cout<<"\n1.push\n2.pop\n3.display\n4.exit";
cout<<"\n enter ur choice:";
cin>>n;
switch(n)
{case 1:
sa.push();
break;
case 2:
sa.pop();
break;
case 3:
sa.display();
break;
case 4:
exit(0);
default:
cout<<"Invalid option";
}
}
getch();
}
*/

/* C++ program to implement basic stack
   operations 
#include<bits/stdc++.h>
using namespace std;
 
#define MAX 1000
 
class Stack
{
    int top;
public:
    int a[MAX];    //Maximum size of Stack
 
    Stack()  { top = -1; }
    bool push(int x);
    int pop();
    bool isEmpty();
};
 
bool Stack::push(int x)
{
    if (top >= MAX)
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        return true;
    }
}
 
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
 
bool Stack::isEmpty()
{
    return (top < 0);
}
 
// Driver program to test above functions
int main()
{
     Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
 
    cout << s.pop() << " Popped from stack\n";
 
    return 0;
}
*/
