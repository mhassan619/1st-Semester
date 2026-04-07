#include<iostream>
using namespace std;
     int main(){
     	int n,i,sum=0;
     	cout<<"Enter the number of persons"<<endl;
     	cin>>n;
     	int arr[n];
     	for(i=0; i<n; i++){
     		cout<<"Enter age: ";
     		cin>>arr[i];
		 }
		 for(i=0; i<n; i++){
		 	if(arr[i]>=50){
		 		if(arr[i]<=60){
		 			sum=sum+1;
				 }
			 }
		 }
		 cout<<"Number of persons whose age between 50 to 60: "<<sum<<endl;
		 return 0;
	 }