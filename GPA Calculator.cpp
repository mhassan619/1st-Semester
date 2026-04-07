#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter your marks in any one subject:"<<endl;
	cin>>n;
	if(n==50){
		cout<<"Your CGPA in this subject is 2.0"<<endl;
	} else if(n==51){
	cout<<"Your CGPA in this subject is 2.1"<<endl;	
	} else if(n==52){
		cout<<"Your CGPA in this subject is 2.15"<<endl;
	} else if(n==53){
		cout<<"Your CGPA in this subject is 2.20"<<endl;
	} else if(n==54){
		cout<<"Your CGPA in this subject is 2.25"<<endl;
	} else if(n==55){
		cout<<"Your CGPA in this subject is 2.3"<<endl;
	} else if(n==56){
		cout<<"Your CGPA in this subject is 2.4"<<endl;
	} else if(n==57){
		cout<<"Your CGPA in this subject is 2.5"<<endl;
	} else if(n==58){
		cout<<"Your CGPA in this subject is 2.55"<<endl;
	} else if(n==59){
		cout<<"Your CGPA in this subject is 2.6"<<endl;
	} else if(n==60){
		cout<<"Your CGPA in this subject is 2.7"<<endl;
	} else if(n==61){
		cout<<"Your CGPA in this subject is 2.75"<<endl;
	} else if(n==62){
		cout<<"Your CGPA in this subject is 2.8"<<endl;
	} else if(n==63){
		cout<<"Your CGPA in this subject is 2.9"<<endl;
	} else if(n==64){
		cout<<"Your CGPA in this subject is 2.95"<<endl;
	} else if(n==65){
		cout<<"Your CGPA in this subject is 3.0"<<endl;
	} else if(n==66){
		cout<<"Your CGPA in this subject is 3.1"<<endl;
	} else if(n==67){
		cout<<"Your CGPA in this subject is 3.15"<<endl;
	} else if(n==68){
		cout<<"Your CGPA in this subject is 3.2"<<endl;
	} else if(n==69){
		cout<<"Your CGPA in this subject is 3.3"<<endl;
	} else if(n==70){
		cout<<"Your CGPA in this subject is 3.35"<<endl;
	} else if(n==71){
		cout<<"Your CGPA in this subject is 3.4"<<endl;
	} else if(n==72){
		cout<<"Your CGPA in this subject is 3.5"<<endl;
	} else if(n==73){
		cout<<"Your CGPA in this subject is 3.55"<<endl;
	} else if(n==74){
		cout<<"Your CGPA in this subject is 3.6"<<endl;
	} else if(n==75){
		cout<<"Your CGPA in this subject is 3.7"<<endl;
	} else if(n==76){
		cout<<"Your CGPA in this subject is 3.75"<<endl;
	} else if(n==77){
		cout<<"Your CGPA in this subject is 3.8"<<endl;
	} else if(n==78){
		cout<<"Your CGPA in this subject is 3.9"<<endl;
	} else if(n==79){
		cout<<"Your CGPA in this subject is 3.95"<<endl;
	} else if(n==80){
		cout<<"Your CGPA in this subject is 4.0"<<endl;
	} else if(n>80 && n<=100){
		cout<<"Your CGPA in this subject is 4.0"<<endl;
	} else if(n>=0 && n<=49){
		cout<<"Ooops! You are fail in this subject"<<endl;
	} else {
		cout<<"Please enter valid marks from 0 to 100"<<endl;
	}
	return 0;
}