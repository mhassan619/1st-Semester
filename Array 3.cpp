#include<iostream>
using namespace std;
    int main(){
    	int arr[10],min,i;
    	for(i=0; i<10; i++){
    		cout<<"Enter Value.";
    		cin>>arr[i];
		}
		min=arr[0];
		for(i=0; i<10; i++)
		if(min>arr[i])
			min=arr[i];
			cout<<"Minimum Value: "<<min;
		return 0;
	}