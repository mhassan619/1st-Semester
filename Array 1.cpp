#include<iostream>
using namespace std;
    int main(){
    	int arr[5],i,sum=0;
    	float avg;
    	for(i=0; i<5; i++){
    		cout<<"Enter Value.";
    		cin>>arr[i];
    		sum=sum+arr[i];
		}
		avg=sum/5;
		cout<<"Sum is "<<sum<<endl;
		cout<<"Average is " <<avg<<endl;
		return 0;
	}