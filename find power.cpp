#include<iostream>
using namespace std;

  int main()
  {
  	float power,voltage,current;
  	cout<<"Enter current in amperes"<<endl;
  	cin>>current;
  	cout<<"Enter voltage in volts"<<endl;
  	cin>>voltage;
  	
  	power=current*voltage;
  	
  	cout<<"Power in watts"<<"="<< power <<endl;
  	
  	return 0;
  }