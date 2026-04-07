#include<iostream>
using namespace std;
    int fun(){
    	int a,b;
    	cin>>a>>b;
    	int ans=1;
    	for(int i=1; i<=b; i++){
    		ans=ans*a;
		}
		return ans;
	}
   int main(){
   	int answer=fun();
   	cout<<"Answer is : "<<answer<<endl;
   	
   	 answer=fun();
   	cout<<"Answer is : "<<answer<<endl;
   	
   	 answer=fun();
   	cout<<"Answer is : "<<answer<<endl;
   	
   	 return 0;
   }