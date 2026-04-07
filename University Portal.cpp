#include<iostream>
#include<string>
using namespace std;

    int main(){
  	string nationality,province,country,city,others,ID,year;
 	float aggregate,matric,inter,merit,Matric,Inter;
 	int relevantexperience,number,option,i,n;
 	float marks,credit,Subj_marks,Total_Credit,Total_Points,CGPA;
  	string subject;
 	do{cout<<"\nWELCOME DEAR TO THE OFFICIAL PAGE OF UNIVERSITY OF LAYYAH....."<<endl;
 	cout<<"\nPlease choose an option (1-5)."<<endl;
 	cout<<"\n1.Check wheather you are eligible for admission or not."<<endl;
 	cout<<"2.Open Student Portal."<<endl;
 	cout<<"3.Calculate your CGPA."<<endl;
 	cout<<"4.Calculate your merit or aggregate."<<endl;
 	cout<<"5.Exit the Website."<<endl;
 	cin>>number;
 	
 	    switch(number){
 		case 1:
 				cout<<"\nWELCOME TO THE PAGE OF UNIVERSITY OF LAYYAH TO CHECK WHEATHER YOU ARE ELIGIBLE FOR ADMISSION OR NOT."<<endl;
 	cout<<"\nEnter your nationality (write first letter capital of Pakistan & if you are not from Pakistan then write your nationality international)"<<endl;
 	cin>>nationality;
 	
 	
 	if(nationality=="Pakistan"){
 	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF PROVINCE AND SPELLING SHOULD BE CORRECT"<<endl;
 	cout<<"Enter your province(Punjab,Sindh,Balochistan,KPK,Islamabad,AJK,Gilgit_Baltistan)"<<endl;
 	cin>>province;
 	
 	if(province=="Punjab"){
 	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITY AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nONLY MENTION COUNTRIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF COUNTRY AND SPELLING SHOULD BE CORRECT"<<endl;
 	cout<<"Enter your country name(UK,US,Germany,Japan,China,others)"<<endl;
 	cin>>country;
 	
 	if(country=="UK"){
 	cout<<"\nONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
 	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
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
	cout<<"\nONLY MENTION CITIES ARE ALLOWED TO TAKE ADMISSION."<<endl;
	cout<<"\nNOTE! WRITE FIRST LETTER CAPITAL OF CITIES AND SPELLING SHOULD BE CORRECT"<<endl;
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
    	 break;
        case 2:
	    	do{cout<<"\nWELCOME TO THE STUDENT PORTAL...."<<endl;
	    	cout<<"Enter User ID"<<endl;
	    	cin>>ID;
	    	cout<<"\nWELCOME STUDENT ID: "<<ID<<endl;
	        cout<<"--- University of Layyah Portal---"<<endl;
	        cout<<"\nPlease choose an option (1-3)."<<endl;
	        cout<<"1.Check Your Academic details."<<endl;
	        cout<<"2.Check Your Attendance."<<endl;
	        cout<<"3.Exit the Page."<<endl;
	        cin>>n;
	       switch(n){
			case 1:
			     
			     cout<<"\nEnter the year of your admission(2023-24)."<<endl;
			     cin>>year;if(year=="2023"){
			     	cout<<"\nAcademic Details---"<<endl;
			     	cout<<"Department: Computer Science."<<endl;
			     	cout<<"Session: 2023-27."<<endl;
			     	cout<<"CGPA: 3.8/4.0"<<endl;
			     	cout<<"Major: Programming Fundamentals,ICT,Math301 & Math401."<<endl;
				 }else if(year=="2024"){
				    cout<<"\nAcademic Details---"<<endl;
			     	cout<<"Department: Computer Science."<<endl;
			     	cout<<"Session: 2024-28."<<endl;
			     	cout<<"CGPA: Nill(1st semester)"<<endl;
			     	cout<<"Major: Programming Fundamentals,ICT,Math301 & Math401."<<endl;	
				 }else{
				 	cout<<"Please enter a valid year"<<endl;
				 }
				 break;
				case 2:
				 	cout<<"\nAttendance: 85%"<<endl;
				 	break;
				case 3:
			        cout<<"\nExiting the Portal. Have a Nice Day."<<endl;
			        break;
			    default:
			    	cout<<"\nInvalid Option. Please try again."<<endl;
			    	break;
			    }
			    break;}while(n!=3);
		case 3:
			cout<<"CALCULATE YOUR CGPA"<<endl;
  	        cout<<"\nEnter the numbers of subject"<<endl;
  	        cin>>n;
  	        for(i=1; i<=n; i++){
  		    cout<<"Enter the name of "<<i<<" subject."<<endl;
  		    cin>>subject;
  		    cout<<"Enter the credit of "<<subject<<" out of lecture of that subject in a week e.g. 1,2,3,4,..."<<endl;
  		    cin>>credit;
  		    cout<<"Enter the marks (in CGPA) of "<<subject<<" out of 4"<<endl;
  		    cin>>marks;
  		    Total_Credit+=credit;
  		    Subj_marks+=credit*marks;
	        }
  	        CGPA=Subj_marks/Total_Credit;
  	        cout<<"Your CGPA is: "<<CGPA<<endl; 
			break;
  	    case 4:
		    cout<<"\nWELCOME TO MERIT CALCULATOR OF UNIVERSITY OF LAYYAH." <<endl;  
  	        cout<<"\nEnter your marks in matric(out of 1100)."<<endl;
			cin>>matric;
			cout<<"Enter your marks in FSC or ICS(out of 1200)"<<endl;
			cin>>inter;
			Matric=(matric/1100)*100;
			Inter=(inter/1200)*100;
			merit=(Matric*0.3)+(Inter*0.7);
			cout<<"\nYour merit/aggregate is: "<<merit<<endl;
			break;
		case 5:
		    cout<<"You Leave the Page successfully."<<endl;
			break;	
		default:
			cout<<"\nInvalid Option. Please try again."<<endl;
			break;
		}} while(number!=5);
	 return 0;
	    
	    	
  }