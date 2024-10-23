/* w.a.p to only display the prime values in an array  */

#include<iostream>
using namespace std;

int main(){
		int arr[]={20,2,7,11,5,6,9,4,13,17,19,};
		int n=sizeof(arr)/sizeof(arr[0]);
		
//		for(int i=0; i<n; i++){
//			int sum=0;
//			for(int j=1; j<=arr[i]; j++){
//				if(arr[i]%j==0)
//				sum++;
//			}
//		if(sum==2){
//			cout<<arr[i]<<" ";
//		}
//		}

		int f;
		for(int i=0; i<n; i++){
			f=0;
			int k=arr[i]-1;
			while(k>1){
				if(arr[i]%k==0){
					f=1;
					break;
				}
				k--;
			}
			if(f==0){
				cout<<arr[i]<<"\t";
			}
		}


return 0;
}

