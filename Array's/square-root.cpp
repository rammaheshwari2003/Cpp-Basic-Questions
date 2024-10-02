// W.A.P to find square root of valid number in an array 
#include<iostream>
using namespace std;

int main(){
		int arr[]={2,81,64,8,121};
		int n=sizeof(arr)/sizeof(arr[0]);

		for(int i=0; i<n; i++){
			for(int j=1; j<=arr[i]/2; j++){
				if(j*j==arr[i])
				cout<<arr[i]<<" ";
			}
		}

return 0;
}

