#include<iostream>
using namespace std;

 int main()
 { float dollar,PKR;
 cout<<"Enter the money in PKR"<<endl;
 cin>>PKR;
 
 // 1 dollar = 280 PKR
  
dollar=PKR/280;
if(PKR<0){
	cout<<"Enter a valid amount."<<endl;
}else
{
cout<<"Money in Dollar : "<< dollar <<" $ "<<endl;
}
return 0;
 }