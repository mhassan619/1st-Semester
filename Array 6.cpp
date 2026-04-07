#include<iostream>
using namespace std;
   int main(){
   	int num[5],i;
   	for(i=0; i<5; i++){
   		cout<<"Enter any integer:";
   		cin>>num[i];
	   }
	   cout<<"\nArray in actual order."<<endl;
	   for(i=0; i<5; i++)
	   cout<<num[i]<<" ";
	   cout<<"\nArray in reverse order."<<endl;
	   for(i=4; i>=0; i--)
	   cout<<num[i]<<" ";
	   return 0;
   }