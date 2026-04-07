#include<iostream>
using namespace std;
   int main(){
   	int n;
   	cout<<"Enter the number of students: "<<endl;
   	cin>>n;
   	int i;
   	string name[n];
   	int eng[n],arabic[n],islamiat[n],law[n],pf[n],ict[n],math1[n],math2[n],total[n];
   	for(i=0; i<n; i++){
   		cout<<"Enter the name of student of roll.no :"<<i+1<<" :: ";
   		cin>>name[i];
   		cout<<"Enter the  of marks of student of English of roll.no:"<<i+1<<" ::";
   		cin>>eng[i];
   		cout<<"Enter the  of marks of student of Arabic of roll.no:"<<i+1<<" ::";
   		cin>>arabic[i];
   		cout<<"Enter the  of marks of student of Islamiat of roll.no:"<<i+1<<" ::";
   		cin>>islamiat[i];
   		cout<<"Enter the  of marks of student of Law of roll.no:"<<i+1<<" ::";
   		cin>>law[i];
   		cout<<"Enter the  of marks of student of Programming Fundamentals of roll.no:"<<i+1<<" ::";
   		cin>>pf[i];
   		cout<<"Enter the  of marks of student of ICT of roll.no:"<<i+1<<" ::";
   		cin>>ict[i];
   		cout<<"Enter the  of marks of student of Calculas and geometry of roll.no:"<<i+1<<" ::";
   		cin>>math1[i];
   		cout<<"Enter the  of marks of student of Discrete Structure of roll.no:"<<i+1<<" ::";
   		cin>>math2[i];
   		total[i]=eng[i]+arabic[i]+islamiat[i]+law[i]+pf[i]+ict[i]+math1[i]+math2[i];
    }
    cout<<"Sr.No, English, Arabic, Islamiat, Law, P F, ICT, Math 401, Math 301, Total"<<endl;
    for(i=0; i<n; i++){
    	cout<<i+1<<" ,"<<name[i]<<" ,"<<eng[i]<<" ,"<<arabic[i]<<" ,"<<islamiat[i]<<" ,"<<law[i]<<" ,"<<pf[i]<<" ,"<<ict[i]<<" ,"<<math1[i]<<" ,"<<math2[i]<<" ,"<<total[i]<<endl;
	}
	return 0;
   }