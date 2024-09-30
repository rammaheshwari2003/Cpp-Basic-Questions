/*   W.a.p to display only unique value in an array ?  */
#include<iostream>
using namespace std;

int main(){
		int arr[]={1,2,1,5,6,9,8,5,4,6};
		int n=sizeof(arr)/sizeof(arr[0]);

		// for(int i=0; i<n; i++){
		// int count=0;
		// 	for(int j=0; j<n; j++){
		// 		if(arr[i]==arr[j])
		// 		count++;
		// 	}
		// 	if(count==1)
		// 	cout<<arr[i]<<" ";
		// }


		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if(arr[i]==arr[j]){
				break;
			}
			if(i==j){
			cout<<arr[j]<<" ";
		}
		}
               }
return 0;
}

