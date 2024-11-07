#include<iostream>
using namespace std;

int main(){
	
     	int n;
	cout<<"Enter Number: ";
	cin>>n;
	
	if(n>0){
	for(char i='A'; i<='Z'; i++){
	cout<<i<<" ";
	  }
	}
	  if(n<0){
	  for(char i='z'; i>='a'; i--){
	  cout<<i<<" ";
		}
	    }
	   if(n==0){
		cout<<"a, e, i, o, u";
		}

return 0;
}
