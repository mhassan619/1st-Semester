#include<iostream>
using namespace std;

  int main(){
  	int per1, per2, per3;
  	cout<<"Enter all ages"<<endl;
  	cin>>per1>>per2>>per3;
  	
  	if (per1 >per2 && per1 >per3){
  		cout<<"person 1 is greater."<<endl;
	  }else if(per2 >per1 && per2>per3){
	  	cout<<"person 2 is greater."<<endl;
	  }else{
	  	cout<<"Person 3 is greater."<<endl;
	  }
  	
  	cout<<"The project is created by Muhammad Hassan Awan."<<endl;
  	
  	
  }
