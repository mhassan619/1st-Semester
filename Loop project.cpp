#include<iostream>
using namespace std;
  int main(){
  	int n;
  	cout<<"Enter the number of students : ";
  	cin>>n;
  	string name[n];
  	cout<<"Enter student name :"<<endl;
  	for (int i=0; i<n; i++){
  		cin>>name[i];
	  }
	float english[n];
	cout<<"Enter Student English marks :"<<endl;
	for(int i=0; i<n; i++){
		cin>>english[i];
	}
	float physics[n];
	cout<<"Enter Student Physics marks :"<<endl;
	for(int i=0; i<n; i++){
		cin>>physics[i];
	}
	float math[n];
	cout<<"Enter Student Maths marks :"<<endl;
	for(int i=0; i<n; i++){
		cin>>math[i];
	}
	float total[n];
	for(int i=0; i<n; i++){
		total[i]=english[i]+physics[i]+math[i];
	}
	for (int i=0; i<n; i++){
		cout<<"\nStudent Name: "<<name[i]<<endl;
		cout<<"English Marks: "<<english[i]<<endl;
		cout<<"Physics Marks: "<<physics[i]<<endl;
		cout<<"Math Marks: "<<math[i]<<endl;
		cout<<"Total Marks: "<<total[i]<<endl;
	}
	return 0;
  }