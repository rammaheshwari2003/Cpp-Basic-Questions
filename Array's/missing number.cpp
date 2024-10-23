#include<iostream>
using namespace std;

int main(){
			int arr[]={1,2,3,5,6};
			int n=sizeof(arr)/sizeof(arr[0]);
		
			for(int i=0; i<n; i++){
			if(arr[i+1]-arr[i]>1){
				cout<<"missing: "<<arr[i]+1;
			}			
    		  }

return 0;
}

