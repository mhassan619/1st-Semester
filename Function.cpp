#include<iostream>
using namespace std;
    int fun(int a, int b){
    	int ans=1;
    	for(int i=1; i<=b; i++){
    		ans=ans*a;
		}
		return ans;
	}
   int main(){
   	int a,b;
   	cin>>a>>b;
   	int answer=fun(a,b);
   	cout<<"Answer is : "<<answer<<endl;
   	 return 0;
   }