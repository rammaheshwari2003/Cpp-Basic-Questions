// w.a.p. to display only duplicate value in an array?
#include<iostream>
using namespace std;

int main(){
		int arr[]={1,5,9,7,11,7,5,9,55,60,88};
		int size=sizeof(arr)/sizeof(arr[0]);
		
		for(int i=0; i<size; i++){
			for(int j=i+1; j<size; j++){
				if(arr[i]==arr[j]){
					cout<<arr[i]<<" ";
					break;
				}
			}
		}

return 0;
}

