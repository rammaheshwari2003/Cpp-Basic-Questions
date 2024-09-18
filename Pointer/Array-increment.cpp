#include<iostream>
using namespace std;
				void increment_10(int Arr[], int size){
					for(int i=0; i<size; i++){
						Arr[i]=Arr[i]+10;	
					}
				}
int main(){
			int arr[]={34,5,66,7,8,8};
			int size=sizeof(arr)/sizeof(arr[0]);
			for(int i=0; i<size; i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
			
			increment_10(arr,size);     // we actually pass base address / (behave as call by reference).
			for(int i=0; i<size; i++){  // size passing behave as call by value.
				cout<<arr[i]<<" ";
			}

return 0;
}

