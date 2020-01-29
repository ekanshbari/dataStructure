//Write a program to implement a linked stack.
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
using namespace std;				
struct stack
{
int data;
struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);

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
top = push(top, val);
break;
case 2:
top = pop(top);
break;
case 3:
val = peek(top);
if (val != -1)
cout<<"\n The value at the top of stack is: %d"<< val;
else
cout<<"\n STACK IS EMPTY";
break;
case 4:
top = display(top);
break;
}
}while(option != 5);
return 0;
}
struct stack *push(struct stack *top, int val)
{
struct stack *ptr;
ptr = (struct stack*)malloc(sizeof(struct stack));
ptr -> data = val;
if(top == NULL)
{
ptr -> next = NULL;
top = ptr;
}
else
{
ptr -> next = top;
top = ptr;
}
return top;
}
struct stack *display(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
cout<<"\n STACK IS EMPTY";
else
{
	while(ptr != NULL)
{
cout<<"\n"<< ptr -> data;
ptr = ptr -> next;
}
}
return top;
}
struct stack *pop(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
cout<<"\n STACK UNDERFLOW";
else
{
top = top -> next;
cout<<"\n The value being deleted is: %d"<< ptr -> data;
free(ptr);
}
return top;
}
int peek(struct stack *top)
{
if(top==NULL)
return -1;
else
return top ->data;
}
