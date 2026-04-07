#include<iostream>
using namespace std;

 int main()
 { float dollar,rupees;
 cout<<"Enter the money in US"<<endl;
 cin>>dollar;
 
 // 1 UK = 280.8 PKR
  
rupees=dollar*280.8;
if(dollar<0){
	cout<<"Enter a valid amount."<<endl;
}else
{
cout<<"Money in PKR : "<< rupees <<" PKR "<<endl;
}
return 0;
 }