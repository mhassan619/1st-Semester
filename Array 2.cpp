#include<iostream>
using namespace std;
    int main(){
    	int arr[10],max,i;
    	for(i=0; i<10; i++){
    		cout<<"Enter Value.";
    		cin>>arr[i];
		}
		max=arr[0];
		for(i=0; i<10; i++)
		if(max<arr[i])
			max=arr[i];
			cout<<"Maximum Value: "<<max;
		return 0;
	}