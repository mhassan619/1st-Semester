#include<iostream>
#include<string> 
using namespace std;
 int main()
 {
 	string nationality,province,country,city,others;
 	float aggregate;
 	int relevantexperience;
 	
 	cout<<"WELCOME TO THE PAGE OF UNIVERSITY OF LAYYAH TO CHECK WHEATHER YOU ARE ELIGIBLE FOR ADMISSION OR NOT."<<endl;
 	cout<<"Enter your nationality (write first letter capital of Pakistan & if you are not from Pakistan then write your nationality international)"<<endl;
 	cin>>nationality;
 	
 	
 	if(nationality=="Pakistan"){
 	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF PROVINCE AND SPELLING SHOULD BE CORRECT"<<endl;
 	cout<<"Enter your province(Punjab,Sindh,Balochistan,KPK,Islamabad,AJK,Gilgit_Baltistan)"<<endl;
 	cin>>province;
 	
 	if(province=="Punjab"){
 	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
 	cout<<"Enter your city(Layyah,Multan,Lahore,Rawalpindi,Faislabad,others)"<<endl;
 	cin>>city;
 	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;	
 	    if(city=="Layyah" && aggregate>=90){
 	     cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 } else if(city=="Multan" && aggregate>=89){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Lahore" && aggregate>=88){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl; 	
		 }else if(city=="Rawalpindi" && aggregate>=87){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Faislabad" && aggregate>=88){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="others" && aggregate>=86){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 cout<<"Please visit our website to enter complete details about your city."<<endl;	
		 }else{
		 cout<<"You do not meet eligibility criteria. Good luck for next year!"	<<endl;
		 }
	    }
	
	if(province=="Sindh"){
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Karachi,Hyderabad,Larkana,Thul,Sukkur,others)"<<endl;
 	cin>>city;
 	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;	
 	    if(city=="Karachi" && aggregate>=80){
 	      cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Hyderabad" && aggregate>=79){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Larkana" && aggregate>=78){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Thul" && aggregate>=76){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Sukkur" && aggregate>=77){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="others" && aggregate>=75){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 cout<<"Please visit our website to enter complete details about your city."<<endl;	
		 }else{
		 cout<<"You do not meet eligibility criteria. Good luck for next year!"	<<endl;	
		 }
		}
	
	if(province=="KPK"){
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Peshawar,Kohat,Abbottabad,Dera Ismail Khan,Mardan,others)"<<endl;
 	cin>>city;
 	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;	
 	    if(city=="Peshawar" && aggregate>=80){
 	      cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Abbottabad" && aggregate>=79){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Kohat" && aggregate>=78){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Dera Ismail Khan" && aggregate>=76){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Mardan" && aggregate>=77){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="others" && aggregate>=75){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 cout<<"Please visit our website to enter complete details about your city."<<endl;	
		 }else{
		 cout<<"You do not meet eligibility criteria. Good luck for next year!"	<<endl;	
		 }
		}
	
	if(province=="Balochistan"){
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Quetta,Gwadar,Khuzdar,Turbat,Sibi,others)"<<endl;
 	cin>>city;
 	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;	
 	    if(city=="Quetta" && aggregate>=75){
 	      cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Gwadar" && aggregate>=74){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Sibi" && aggregate>=73){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Turbat" && aggregate>=72){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Khuzdar" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="others" && aggregate>=70){
		 cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 cout<<"Please visit our website to enter complete details about your city."<<endl;	
		 }else{
		  cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;	
		 }
		}

	if(province=="Islamabad"){
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Islamabad)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;
 	    if(city=="Islamabad" && aggregate>=85){
 	      cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else{
	    cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;	
		}
	   }
	
	if(province=="AJK"){
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Muzaffarabad,Rawalakot,Kotli,Mirpur,others)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;
 	    if(city=="Muzaffarabad" && aggregate>=70){
 	     cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Rawalakot" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Kotli" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Mirpur" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="others" && aggregate>=65){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		  cout<<"Please visit our website to enter complete details about your city."<<endl;
		 }else{
		 cout<<"You do not meet eligibility criteria. Good luck for next year!"	<<endl;	
		 }
		} 
	
	if(province=="Gilgit_Baltistan"){
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Gilgit,Skardu,Diamir,Naran,others)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
 	cin>>aggregate;
 	    if(city=="Gilgit" && aggregate>=70){
 	     cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Skardu" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Diamir" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="Naran" && aggregate>=70){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;		
		 }else if(city=="others" && aggregate>=65){
		  cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		  cout<<"Please visit our website to enter complete details about your city."<<endl;
		 }else{
		 cout<<"You do not meet eligibility criteria. Good luck for next year!"	<<endl;	
		 }
		} 
    }
 	
	 
	if(nationality=="international"){
	cout<<"ONLY MENTION COUNTRIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF COUNTRY AND SPELLING SHOULD BE CORRECT"<<endl;
 	cout<<"Enter your country name(UK,US,Germany,Japan,China,others)"<<endl;
 	cin>>country;
 	
 	if(country=="UK"){
 	cout<<"ONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
 	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(London,Manchester,Liverpool,Cambridge,Oxford)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
	cin>>aggregate;
	cout<<"Enter your relevantexperience"<<endl;
	cin>>relevantexperience;
	     if(city=="London" && aggregate>=85 && relevantexperience>=1){
	     	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Manchester" && aggregate>=84 && relevantexperience>=1){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Liverpool" && aggregate>=83 && relevantexperience>=1){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Cambridge" && aggregate>=82 && relevantexperience>=1){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Oxford" && aggregate>=81 && relevantexperience>=1){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else {
		 	cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;
		 }
	   }

	if(country=="US"){
	cout<<"ONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(New_York,Portland,Washington,Houston,Austin)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
	cin>>aggregate;
	cout<<"Enter your relevantexperience"<<endl;
	cin>>relevantexperience;
	     if(city=="New_York" && aggregate>=85 && relevantexperience>=1){
	     	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Portland" && aggregate>=84 && relevantexperience>=1){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Washington" && aggregate>=83 && relevantexperience>=1){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Houston" && aggregate>=82 && relevantexperience>=1){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Austin" && aggregate>=81 && relevantexperience>=1){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else {
		 	cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;
		 }
	   }
	
	if(country=="Germany"){
	cout<<"ONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Berlin,Hamburg,Bremen,Munich,Essen)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
	cin>>aggregate;
	cout<<"Enter your relevantexperience"<<endl;
	cin>>relevantexperience;
	     if(city=="Berlin" && aggregate>=85 && relevantexperience>=2){
	     	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Hamburg" && aggregate>=84 && relevantexperience>=2){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Bremen" && aggregate>=83 && relevantexperience>=2){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Munich" && aggregate>=82 && relevantexperience>=2){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Essen" && aggregate>=81 && relevantexperience>=2){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else {
		 	cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;
		 }
	   }
	
	if(country=="Japan"){
	cout<<"ONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Tokyo,Kyoto,Osaka,Nagoya,Nikko)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
	cin>>aggregate;
	cout<<"Enter your relevantexperience"<<endl;
	cin>>relevantexperience;
	     if(city=="Tokyo" && aggregate>=85 && relevantexperience>=2){
	     	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Kyoto" && aggregate>=84 && relevantexperience>=2){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Osaka" && aggregate>=83 && relevantexperience>=2){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Nagoya" && aggregate>=82 && relevantexperience>=2){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Nikko" && aggregate>=81 && relevantexperience>=2){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else {
		 	cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;
		 }
	   }
 	
	 if(country=="China"){
	cout<<"ONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"NOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
	cout<<"Enter your city(Shangai,Beijing,Wuhan,Chengdu,Harbin)"<<endl;
	cin>>city;
	cout<<"Enter your aggregate"<<endl;
	cin>>aggregate;
	cout<<"Enter your relevantexperience"<<endl;
	cin>>relevantexperience;
	     if(city=="Shangai" && aggregate>=85 && relevantexperience>=2){
	     	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Beijing" && aggregate>=84 && relevantexperience>=2){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else if(city=="Wuhan" && aggregate>=83 && relevantexperience>=2){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Chengdu" && aggregate>=82 && relevantexperience>=2){
		 	cout<<"You are eligible to get Admission in University of Layyah."<<endl;
		 }else if(city=="Harbin" && aggregate>=81 && relevantexperience>=2){
		    cout<<"You are eligible to get Admission in University of Layyah."<<endl;	
		 }else {
		 	cout<<"You do not meet eligibility criteria. Good luck for next year!"<<endl;
		 }
	   }
	
	if(country=="others") {
	 cout<<"You are not allowed to take admission in University of Layyah."<<endl;  
	   }
	}
    	 return 0;
}