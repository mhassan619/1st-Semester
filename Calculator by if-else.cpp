#include<iostream>
using namespace std;

  int main()
  {
  	float a,b;
  	char o;
  	
  	cout<<"Enter the first number"<<endl;
  	cin>>a;
  	cout<<"Enter the second number"<<endl;
  	cin>>b;
  	cout<<"Enter the operation do you want"<<endl;
  	cin>>o;
  	
  	if (o=='+'){
  	cout<<"Addition of two numbers is : "<<a+b<<endl;
    }else if (o=='-'){
    	cout<<"Subtraction of two numbers is : "<<a-b<<endl;
	}else if(o=='*'){
		cout<<"Multiplication of two numbers is : "<<a*b<<endl;
	}else if(o=='/'){
		cout<<"Division of two numbers is : "<<a/b<<endl;
	}
  
	 return 0;
  }