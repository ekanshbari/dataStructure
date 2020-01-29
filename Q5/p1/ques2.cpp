/*2) Write a program to evaluate student’s performance using structure;
 where structure contains name and total_marks.*/
#include<iostream>
#include<string.h>
using namespace std;

struct student{
string name;
float maths;
float science;
float english;
};
void display(struct student stud[],int);
int main(){
int number;
cout<<"enter the no of students"<<endl;
cin>>number;
student stud[number];
for(int i=0;i<number;i++){
    cout<<"enter name: ";
    cin.ignore();
    getline(cin,stud[i].name,'\n');
    cout<<"enter marks of maths: ";
    cin>>stud[i].maths;
    cout<<"enter marks of English: ";
    cin>>stud[i].english;
    cout<<"enter marks of science: ";
    cin>>stud[i].science;
}

display(stud,number);

}

void display(student stud[],int no){
    for(int i=0;i<no;i++){
      cout<<"name :"<<stud[i].name<<endl;
      cout<<"maths :"<<stud[i].maths<<endl;
      cout<<"English :"<<stud[i].english<<endl;
      cout<<"science :"<<stud[i].science<<endl;


    }

}
