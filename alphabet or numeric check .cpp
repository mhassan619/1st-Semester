#include<iostream>
using namespace std;

  int main(){
  	char c;
  	
  	cout<<"Enter the character"<<endl;
  	cin>>c;
  	
    if(c>='a' && c<='z'){
    	cout<<"it is lower case"<<endl;
	}else if(c>='A' && c<='Z'){
		cout<<"it is upper case"<<endl;
	}else if(c>='0' && c<='100'){
		cout<<"it is numeric"<<endl;
	}else {
		cout<<"Enter a valid amount"<<endl;
	}
	
  }