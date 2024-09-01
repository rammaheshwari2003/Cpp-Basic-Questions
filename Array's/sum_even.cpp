#include<iostream> 
using namespace std;

int main(){
		
			int n,sum=0;
      cout<<"Enter the array: ";
			cin>>n;
			int arr[n];
			for(int i=0; i<n; i++){
				cout<<"Enter array element: ";
				cin>>arr[i];
			}
			for(int i=0; i<n; i++){
				cout<<"Number at index "<<i<<" is: "<<arr[i]<<endl;
			
			if(arr[i]%2==0){
				sum=sum+arr[i];
				
			}
		}
		cout<<"even no. : "<<sum;
			
return 0;
}
