#include<iostream>
using namespace std;
int main() {
	float marks,n,i,GPA,credit,Total_Credit,CGPA,Subj_marks;
	string subject;
	cout<<"Enter number of subjects: ";
	cin>>n;
	for(i=0; i<n; i++) {
		cout<<"Enter the name of "<<i + 1<<" subject."<<endl;
		cin>>subject;
		cout<<"Enter the credit hours of "<<subject<<" out of lecture of that subject in a week e.g. 1,2,3,4,..."<<endl;
		cin>>credit;
		cout<<"Enter your marks in "<<subject<<" subject"<<endl;
		cin>>marks;
		if(marks==50) {
			GPA = 2.0;
		} else if(marks==51) {
			GPA = 2.1;
		} else if(marks==52) {
			GPA = 2.15;
		} else if(marks==53) {
			GPA = 2.20;
		} else if(marks==54) {
			GPA = 2.25;
		} else if(marks==55) {
			GPA = 2.3;
		} else if(marks==56) {
			GPA = 2.4;
		} else if(marks==57) {
			GPA = 2.5;
		} else if(marks==58) {
			GPA = 2.55;
		} else if(marks==59) {
			GPA = 2.6;
		} else if(marks==60) {
			GPA = 2.7;
		} else if(marks==61) {
			GPA = 2.75;
		} else if(marks==62) {
			GPA = 2.8;
		} else if(marks==63) {
			GPA = 2.9;
		} else if(marks==64) {
			GPA = 2.95;
		} else if(marks==65) {
			GPA = 3.0;
		} else if(marks==66) {
			GPA = 3.1;
		} else if(marks==67) {
			GPA = 3.15;
		} else if(marks==68) {
			GPA = 3.2;
		} else if(marks==69) {
			GPA = 3.3;
		} else if(marks==70) {
			GPA = 3.35;
		} else if(marks==71) {
			GPA = 3.4;
		} else if(marks==72) {
			GPA = 3.5;
		} else if(marks==73) {
			GPA = 3.55;
		} else if(marks==74) {
			GPA = 3.6;
		} else if(marks==75) {
			GPA = 3.7;
		} else if(marks==76) {
			GPA = 3.75;
		} else if(marks==77) {
			GPA = 3.8;
		} else if(marks==78) {
			GPA = 3.9;
		} else if(marks==79) {
			GPA = 3.95;
		} else if(marks==80) {
			GPA = 4.0;
		} else if(marks>80 && marks<=100) {
			GPA = 4.0;
		} else if(marks>=0 && marks<=49) {
			cout<<"Ooops! You are fail in this subject"<<endl;
		} else {
			cout<<"Please enter valid marks from 0 to 100"<<endl;
		}
		Total_Credit+=credit;
		Subj_marks+=credit*GPA;
	}
	CGPA=Subj_marks/Total_Credit;

	cout<<"Your CGPA is: "<<CGPA<<endl;
	return 0;
}