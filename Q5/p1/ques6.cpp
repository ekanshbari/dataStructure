/*6) Write a Program to create a structure for Employee containing appropriate fields for ID, Salary and Name.
Prompt the user to enter the details of “n” employees and instantiate the structure and store the references in an array of pointers.
Now write a function to display the details of an employee with given ID.*/
#include<iostream>
using namespace std;
struct employee{
string name;
int id;
float salery;
};
 struct employee *ptr;
 void display(struct employee *ptr,int );
int main(){
int num;
cout<<"enter the no of employee \n";
cin>>num;
employee employ[num];
for(int i=0;i<num;++i){
    cout<<"enter name:\n";
    cin.ignore();
    getline(cin,employ[i].name,'\n');
    cout<<"enter id:\n";
    cin>>employ[i].id;
    cout<<"enter salery:\n";
    cin>>employ[i].salery;

}
ptr=employ;
display(ptr,num);



}

void display(struct employee *ptr , int num ){
for(int i=0;i<num;++i){
    cout<<"\n"<<i+1<<"name:"<<ptr[i].name;
    cout<<"\n"<<i+1<<"id:"<<ptr[i].id;
    cout<<"\n"<<i+1<<"salary:"<<ptr[i].salery;


}
}
