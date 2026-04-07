#include<iostream>
using namespace std;
    int main(){
    	int arr[5],i,dis;
    	for(i=0; i<5; i++){
    		cout<<"Enter any integer:";
    		cin>>arr[i];
		}
		cout<<"\nYour entered values are:"<<endl;
		for(i=0; i<5; i++)
		cout<<arr[i]<<" ";
		return 0;
	}