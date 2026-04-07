#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

   int main(){
   	int i,n;
   	string storename,id,date;
   	float Discount,total,Bill;
   	cout<<"Enter Store Name: ";
   	cin>>storename;
   	cout<<"Enter Date (dd-mm-yyyy): ";
   	cin>>date;
   	cout<<"Enter Receipt ID:";
   	cin>>id;
   	cout<<"Enter the number of medicines: ";
   	cin>>n;
   	vector<string> medi_name(n);
   	vector<float> price(n);
   	for(i=0; i<n; i++){
   		cout<<"Enter Medicine "<<i+1<<" Name: ";
   		cin>>medi_name[i];
   		cout<<"Enter Medicine "<<i+1<<" Price: Rs.";
   		cin>>price[i];
   		total +=price[i];
   		Discount=total*0.2;
	   }
	Bill=total-Discount;
	cout<<"\nStore Name: "<<storename<<endl;
	cout<<"Date: "<<date<<endl;
	cout<<"Receipt ID: "<<id<<endl;
	cout<<"\nNo. "<<setw(15)<< left <<"Medicines"<<setw(15)<< right <<"   Price"<<endl;
    
   for(i=0; i<n; i++){
	cout<<i+1<<". "<<setw(15)<< left <<medi_name[i]<<setw(15)<< right <<" Rs. "<<price[i]<<endl;
     }
     cout<<"\nTotal Amount :"<<total<<endl;
     cout<<"\nDiscount is 20%."<<endl;
     cout<<"\nYour Pill after discount is : Rs."<<Bill<<endl;
	return 0;
   }