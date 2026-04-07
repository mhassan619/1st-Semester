#include<iostream>
using namespace std;

 int main()
 {
 	int wins,draws,losses;
 	cout<<"Enter the won matches"<<endl;
 	cin>>wins;
 	cout<<"Enter the draw matches"<<endl;
 	cin>>draws;
 	cout<<"Enter the lost matches"<<endl;
 	cin>>losses;
 	
 	cout<<"Name of cricket team is Pakistan."<<endl;
 	cout<<"Number of Wins"<<"="<< wins <<endl;
 	cout<<"Number of Draws"<<"="<< draws <<endl;
 	cout<<"Number of Losses"<<"="<< losses <<endl;
 	
 	wins=wins*3;
 	draws=draws*1;
 	losses=losses*0;

 	cout<<"Pakistan has obtained "<< wins+draws+losses <<" points. "<<endl;
 	
 	 return 0;
 }