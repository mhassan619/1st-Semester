#include<iostream>
using namespace std;

  int main(){
  	float i,b,c;
  	c=1;
  	cout<<"Enter the number"<<endl;
  	cin>>b;
  	for(i=b; i>=1; i--){
  		c=c*i;
	  }
	  cout<<"Factorial of number is: "<<c<<endl;
  	return 0;
  }