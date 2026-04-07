#include<iostream>
#include<iomanip>
#include<string>
#include<vector>
using namespace std;

    int main(){
    	int n;
    	string name,date,id;
    	float discount,total,bill;
    	cout<<"Enter Store Name: ";
    	cin>>name;
    	cout<<"Enter date (dd-mm-yyyy): ";
    	cin>>date;
    	cout<<"Enter customer Number: ";
    	cin>>id;
    	cout<<"Enter the number of items: ";
    	cin>>n;
    	vector<string>item_name(n);
    	vector<float>price(n);
    	for(int i=0; i<n; i++){
    		cout<<"Enter Item "<<i+1<<" name: ";
    		cin>>item_name[i];
    		cout<<"Enter Price of "<<i+1<<" item: ";
    		cin>>price[i];
    		total+=price[i];
    		discount=total*0.2;
		}
		bill=total-discount;
		cout<<setw(15)<< left <<"\nStore Name:"<<setw(15)<< right <<name<<endl;
		cout<<setw(15)<< left <<"Date:"<<setw(15)<< right <<date<<endl;
		cout<<setw(15)<< left <<"Customer Number:"<<setw(15)<< right <<id<<endl;
		
	}