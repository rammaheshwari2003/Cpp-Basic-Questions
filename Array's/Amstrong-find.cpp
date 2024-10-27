// w.a.p to find Armstrong number in an array.
#include<iostream>
using namespace std;

int main(){
	int arr[]={2,5,153,458,639,370};
	int size=sizeof(arr)/sizeof(arr[0]);
				
	cout<<"Original array ";
	for(int i=0; i<size; i++){
	cout<<arr[i]<<" ";
	}
		
	cout<<"\nAmstrong number ";
	for(int i=0; i<size; i++){
	int num=arr[i];
	int sum=0;
	int temp=num;
	while(num>0){
	int digit=num%10;
	sum+=digit*digit*digit;
	num/=10;
	}
	if(sum==temp){
	cout<<temp<<" ";
	}
		}
			
return 0;
}

