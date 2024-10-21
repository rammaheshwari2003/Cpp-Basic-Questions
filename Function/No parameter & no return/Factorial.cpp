#include<iostream>
using namespace std;
    
    int f=1;
		void fact(int n){
			
			for(int i=n; i>1; i--){
				f=f*i;
		    	}
	    }
	
	    void display(){
			cout<<"Factorial: "<<f;
		
	    }
	
  int main(){
		  int n;
		  cout<<"Enter a number: ";
		  cin>>n;
		
		  fact(n);
		  display();

return 0;
}
