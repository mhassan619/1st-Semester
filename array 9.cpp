//I am writing this program which calculates the sum of all numbers stored in an array excluding maximum and minimum number
#include<iostream>
using namespace std;
int main(){
	int arr[5],max,min,i,sum = 0,total,initial_total;
	for(i=0; i<5; i++) {
		cout<<"Enter numbers: ";
		cin>>arr[i];
		sum = sum + arr[i];
	}
	max = arr[0];
	for(i=0; i<5; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	min = arr[0];
	for(i=0; i<5; i++){
		if(min > arr[i]){
			min=arr[i];
		}
	}
	initial_total=max+min;
	total = sum - initial_total;
	cout<<"Sum of all numbers is: "<<sum<<endl;
	cout<<"Minimum number is: "<<min<<endl;
	cout<<"Maximum number is: "<<max<<endl;
	cout<<"Final sum after excluding maximum and minimum numbers: "<<total<<endl;
	return 0;
}
