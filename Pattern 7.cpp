 #include<iostream>
using namespace std;
     int main(){
     	int n;
     	
     	cout<<"Enter the number."<<endl;
     	cin>>n;
     	for(int i=1; i<=n; i++){
     		int space=n-1;
     		while(space){
     			cout<<" ";
     			space=space-1;
			 }
			 
			 for(int j=1; j<=i; j++){
			 	cout<<" *";
			 }
			 cout<<endl;
		}
	}