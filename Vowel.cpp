#include<iostream>
using namespace std;

int main(){
	
			
//	for(int i=1; i<=100; i++){
//	  if(i%5==0 || i%7==0)
//	  cout<<i<<" ";
//	}

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
