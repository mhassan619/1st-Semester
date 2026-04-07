#include<iostream>
#include<vector>
using namespace std;

  int main(){
  	int i,n;
  	string subject;
  	float marks;
	float credit;
  	float Subj_marks;
  	float Total_Credit,Total_Points,CGPA;
  	
  	
  	cout<<"CALCULATE YOUR CGPA"<<endl;
  	cout<<"\nEnter the numbers of subject"<<endl;
  	cin>>n;
  	for(i=1; i<=n; i++){
  		cout<<"Enter the name of "<<i<<" subject."<<endl;
  		cin>>subject;
  		cout<<"Enter the credit of "<<subject<<" out of lecture of that subject in a week e.g. 1,2,3,4,..."<<endl;
  		cin>>credit;
  		cout<<"Enter the marks (in CGPA) of "<<subject<<" out of 4"<<endl;
  		cin>>marks;
  		Total_Credit+=credit;
  		Subj_marks+=credit*marks;
	  }
  	CGPA=Subj_marks/Total_Credit;
  	
  	cout<<"Your CGPA is: "<<CGPA<<endl;
  	
	 return 0;
  }