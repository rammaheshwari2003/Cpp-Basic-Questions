// Write a program to create a array of n integer elements ans perform following operations..
// a) display.  b) display in reverse order.  c) display alternate elements from starting index.
// d) display elements which are multiple of 7.    e) add them all and show result.   f) find avg.

#include<iostream>
using namespace std;

int main(){
		int n;
		cout<<"Enter a number of elements: ";
		cin>>n;
		int arr[n];
		// input
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}
		// a) display
		cout<<"Display array: \n";
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		// b) display in reverse order
		cout<<"Display reverse order: \n";
		for(int i=n-1; i>=0; i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		// c) display alternate elements from starting index	
		cout<<"Display alternate elements: \n";
		for(int i=0; i<n; i+=2){
			cout<<arr[i]<<" ";
		}
		cout<<endl;	
		
		// d) display elements which are multiple of 7
		cout<<"Display multiple of 7: \n";
		for(int i=0; i<n; i++){
			if(arr[i]%7==0)
			cout<<arr[i]<<" ";
		}
		cout<<endl;
		
		// e) add them all and show result
		cout<<"Add all: \n";
		int sum=0;
		for(int i=0; i<n; i++){
			sum+=arr[i];
		}
		cout<<"Sum of elements: "<<sum<<endl;
		
		// f) find avg
		double avg=0;
		  avg+=(double)sum/n;
		  cout<<"Average of elements: "<<avg<<endl;
return 0;
}
