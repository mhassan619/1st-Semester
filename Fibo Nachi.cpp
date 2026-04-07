#include<iostream>
using namespace std;

 int main(){
 	int numb1=0,numb2=1,numb3,n;
 	cout<<"Enter any Number."<<endl;
 	cin>>n;
 	for(int i=1; i<=n; i++){
 		cout<<numb1<<" ";
 		numb3=numb1+numb2;
 		numb1=numb2;
 		numb2=numb3;
	 }
	 return 0;
 }