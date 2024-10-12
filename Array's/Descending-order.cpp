/* deceding  */

#include<iostream> 
using namespace std;

int main(){
			int arr[]={1,2,7,11,5,6,9,4,13,17,19};
			int n=sizeof(arr)/sizeof(arr[0]);
			
			for(int i=0; i<n; i++){
				for(int j=n; j>=i; j--){
					if(arr[i]<arr[j]){
						int temp=arr[i];
						arr[i]=arr[j];
						arr[j]=temp;
					}
				}
			}
			
			
//			for(int i=0; i<n; i++){
//			for(int j=i; j<n; j++){
//				if(arr[i]>arr[j]){
//					int temp=arr[i];
//					arr[i]=arr[j];
//					arr[j]=temp;
//				}
//			}
//		}
			for(int i=0; i<n; i++){
				cout<<arr[i]<<" ";
			}

return 0;
}

