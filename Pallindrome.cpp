#include<iostream>
using namespace std;

int main(){
	int a,n,reversed=0,remainder;
	cout<<"Enter any number"<<endl;
	cin>>n;
	a=n;
	while(a!=0){
		remainder=a%10;
		reversed=reversed*10+remainder;
		a/=10;
	}
	cout<<"\nReverse Numbers is :"<<reversed<<endl;
	if(reversed==n){
		cout<<"\nNumber is Pallindrome."<<endl;
	}else{
		cout<<"\nNumber is not Pallindrome."<<endl;
	}
	return 0;
}