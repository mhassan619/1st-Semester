#include<iostream>
using namespace std;

  int main() 
  {
  	string name;
  	float matric,intermediate,ECAT,aggregate;
  	cout<<"Enter the name"<<endl;
  	cin>>name;
  	cout<<"Enter the matric marks"<<endl;
  	cin>>matric;
  	cout<<"Enter the intermediate marks"<<endl;
  	cin>>intermediate;
  	cout<<"Enter ECAT marks"<<endl;
  	cin>>ECAT;
  	
  	cout<<"Student Name :"<< name <<endl;
  	cout<<"Matric marks :"<< matric <<endl;
  	cout<<"Intermediate marks :"<< intermediate <<endl;
  	cout<<"ECAT marks :"<< ECAT <<endl;
  	
	matric=(matric/1100*100)*0.1;
  	intermediate=(intermediate/550*100)*0.40;
  	ECAT=(ECAT/400*100)*0.5;
  	
  	
  	cout<<"Aggregate"<<"="<<matric+intermediate+ECAT<<endl;
  	
  	  return 0;
  	}
  	