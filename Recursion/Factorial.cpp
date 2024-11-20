// Q.2) w.a.p to genearate the factorial using recursion.
#include<iostream>
using namespace std;
	int fact(int n){
		if(n==1){
		return 1;
	}
	return fact(n-1)*n;
			
	}
int main(){
	int n;
	cout<<"Enter a number: "; 
	cin>>n;
	fact(n);
	
	cout<<fact(n);

return 0;
}
