//"	Write a program to create and store records of students dynamically (using pointers) and display them.
#include <iostream>
#include<malloc.h>
using namespace std;

struct course
{
   int marks;
   char subject[30];
};

int main()
{
   struct course *ptr;
   int i, noOfRecords;
   cout<<"Enter number of records: ";
   cin>>noOfRecords;

   // Allocates the memory for noOfRecords structures with pointer ptr pointing to the base address.
   ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));

   for(i = 0; i < noOfRecords; ++i)
   {
       cout<<"Enter name of the subject and marks respectively:\n";
       cout<< &(ptr+i)->subject<< &(ptr+i)->marks;
   }

   printf("Displaying Information:\n");

   for(i = 0; i < noOfRecords ; ++i)
       cout<<(ptr+i)->subject<<(ptr+i)->marks;

   return 0;
}
