/*  w.a.p to display the sum of alternate values of an array ? */
#include<iostream>
using namespace std;

int main(){
		int arr[]={1,2,7,11,5,6,9,4,13,17,19};
		int n=sizeof(arr)/sizeof(arr[0]);
		int sum=0;
		for(int i=0; i<n; i=i+2){
			sum+=arr[i];
		}
		cout<<sum;


return 0;
}

