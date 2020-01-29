/*9) Write a program to print names and number of employees
 who have 5 year or more experience and salary less
 than Rs. 10,000/- using an array of structures.*/
#include<iostream>
using namespace std;
struct employee{
string name;
int experience;
int salery;
};
void result(struct employee employ[],int);
int main(){
int num;

cout<<"enter number of employee u want enter:"<<endl;
cin>>num;
employee employ[num];
for(int i=0;i<num;++i){
    cout<<"enter name:";
    cin.ignore();
    getline(cin,employ[i].name,'\n');
    cout<<"enter experience:";
    cin>>employ[i].experience;
    cout<<"enter salary:";
    cin>>employ[i].salery;
}
result(employ,num);
}

void result(employee employ[],int num){
    for(int i=0;i<num;++i){
        if(employ[i].experience>=5 && employ[i].salery<10000){
            cout<<i+1<<"name : "<<employ[i].name<<endl;
        }
    }

}
