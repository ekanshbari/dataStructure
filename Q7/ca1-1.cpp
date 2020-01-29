#include<iostream>
using namespace std;
struct player{
	int id;
	string name;
	int run;
	int grade;
};

int main(){
	int n;
		int sum=0,sum1=0,sum2=0;
	cout<<"enter the no of player"<<endl;
	cin>>n;
	player *ptr,arr[n];
	for(int i=0;i<n;i++){
		cout<<"---------------------["<<i+1<<"]------------------- "<<endl;
		cout<<"enter the name of player:"<<endl;
	cin>>arr[i].name;
		cout<<"enter the grade (1/2/3):"<<endl;
		cin>>arr[i].grade;
		cout<<"enter the run:"<<endl;
		cin>>arr[i].run;
	cout<<"your id :"<<endl;
	cin>>arr[i].id;
	}
	ptr=arr;
	for(int i=0;i<n;i++){
	cout<<endl<<"---------------------["<<i+1<<"]------------------- "<<endl;
	cout<<"player name :"<<ptr->name<<endl;
	cout<<"id:"<<ptr->id<<endl;
	cout<<"run :"<<ptr->run<<endl;
	cout<<"grade :"<<ptr->grade<<endl;
   // fun(ptr->grade,ptr->run);
   	if(ptr->grade==1){
		sum=sum+ptr->run;
		
	}
	else if(ptr->grade==2){
		sum1=sum1+ptr->run;
	
	}
	else{
		sum2=sum2+ptr->run;
		
	}
	ptr=ptr+1;
	}
	
	    cout<<"grade1 :"<<sum<<endl;
		cout<<"grade2 :"<<sum1<<endl;
		cout<<"grade3 :"<<sum2<<endl;
}

