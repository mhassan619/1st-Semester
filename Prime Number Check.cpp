#include<iostream>
using namespace std;
   int main(){
   	int n,a;
   	cout<<"Enter the number."<<endl;
   	cin>>n;
   	a=n-1;
   	do {
   		if(n==2){
   			cout<<"Number is prime."<<endl;
   			return 0;
		   }
		    if(n%a!=0)
		    a--;
			else {
		   	cout<<"Number is not prime."<<endl;
		   	return 0;
		   }
	   }
	   while(a>1);
	   cout<<"Number is prime."<<endl;
	   return 0;
	 

   }