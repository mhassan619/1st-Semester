#include<iostream>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter any number."<<endl;
	cin>>n;
	do{
		cout<<n<<"*"<<i<<"="<<n*i<<endl;
		i++;
	}
	while (i<=10);
	return 0;

}