#include<iostream>
#include<iomanip>
using namespace std;
 
  int main(){
  	int n;
  	float amount,a;
  	string passward;
  	do {cout<<"\nWelcome to Fake Bank."<<endl;
  	cout<<"\nPlease choose an option (1 to 4)."<<endl;
  	cout<<"\n1.Withdraw money."<<endl;
  	cout<<"2.Check balance."<<endl;
  	cout<<"3.Deposit money."<<endl;
  	cout<<"4.Exit."<<endl;
  	cin>>n;
  	
  	switch (n){
  		case 1:
  			cout<<"\nPease choose or write that how much money you want to withdraw from your fake account."<<endl;
  			cout<<"\n"<<setw(15)<<left<<"1.Rs.10000"<<setw(15)<<right<<"2.Rs.25000"<<endl;
  			cout<<"\n"<<setw(15)<<left<<"3.Rs.50000"<<setw(18)<<right<<"4.Rs.1000000"<<endl;
  			cout<<"\nOthers."<<endl;
  			cout<<"\nEnter amount"<<endl;
  			cin>>amount;
  			if(amount>1000000){
  				cout<<"You have not enough balance!! Please deposit some money in your fake account to withdraw."<<endl;
  				} else {
  					cout<<"You have successfully withdraw your money."<<endl;
				  }
  			break;
  		case 2:
  			cout<<"\nEnter your passward to check balance."<<endl;
  			cin>>passward;
  			cout<<"\nYou have low balance! Please recharge your account."<<endl;
  			cout<<"\nYour availabe balance is: Rs.0.0005"<<endl;
  			break;
  		case 3:
  			cout<<"Welcome Sir! Please enter amount you want to deposit in your fake account."<<endl;
  			cin>>a;
  			cout<<"\nDear Sir! You have successfully deposit "<<a<<" rupees."<<endl;
  			break;
  		case 4:
  			cout<<"Thank you for vsiting us!!!"<<endl;
  			break;
  		default:
  			cout<<"Please enter valid option."<<endl;
  			break;
		  }
		  }
		  while(n!=4);
		  return 0;
  }