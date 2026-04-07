#include<iostream>
using namespace std;

  int main()
  {
  	float Megabytes,Bits;
  	cout<<"Enter the size in megabytes"<<endl;
  	cin>>Megabytes;
  	
  	Bits=Megabytes*1024*1024*8;
  	
  	cout<<"Your answer is :"<< Bits <<endl;
  	
  	 return  0;
  }