#include<iostream>
using namespace std;
   int add(int a, int b);
   int main(){
   	int num1,num2,sum;
   	cout<<"Enter any two integers: "<<endl;
   	cin>>num1;
   	cin>>num2;
   	sum=add(num1,num2);
   	cout<<"Sum of two integers is: "<<add<<endl;
   	return 0;
   }