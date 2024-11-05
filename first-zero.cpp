#include<iostream>
using namespace std;

int main(){
	
int arr[]={1,0,5,0,2};
int n=sizeof(arr)/sizeof(arr[0]);
		for(int i=0; i<n; i++){
			if(arr[i]!=0){
				int t=arr[i];
				arr[i]=arr[n-1];
				arr[n-1]=t;
				n--;
				i--;
			}
		}
		for(int i=n; i<sizeof(arr)/sizeof(arr[0]); i++){
			for(int j=i+1; j<sizeof(arr)/sizeof(arr[0]); j++){
				if(arr[i]>arr[j]){
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
			
		}
	
		cout<<"shift last zero: ";
		for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
			cout<<arr[i]<<"\t";
		}
		
	
return 0;
}
