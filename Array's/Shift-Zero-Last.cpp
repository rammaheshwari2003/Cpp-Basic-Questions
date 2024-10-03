/*  w.a.p to shift all zero at the end but relative order should be maintaing ? */
 #include<iostream>
using namespace std;

int main(){ 
		int arr[]={1,2,0,11,5,0,9,4,0,17,19,0};
		int n=sizeof(arr)/sizeof(arr[0]);
		int j=0;
		for(int i=0; i<n; i++){
				if(arr[i]!=0){
					arr[j]=arr[i];
					j++;
				}
			}
			while(j<n){
				arr[j]=0;
				j++;
			}
		
		for(int i=0; i<n; i++){
			cout<<arr[i]<<" ";
		}

return 0;
}

