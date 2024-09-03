// 2D array Row wise addition.
#include<iostream>
using namespace std;

int main(){
			int arr[3][3]={1,1,2,5,6,7,5,5,5};
			
			for(int i=0; i<3; i++){
				int sum=0;
				for(int j=0; j<3; j++){
					cout<<arr[i][j]<<" ";
					sum+=arr[i][j];
				}	
				cout<<" ====> "<<sum<<endl;
			}
			


return 0;
}
