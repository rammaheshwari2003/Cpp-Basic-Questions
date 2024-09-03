// 2D array column wise additon.
#include<iostream>
using namespace std;

int main(){
			int arr[3][3]={1,1,2,5,6,7,5,5,5};
			int sum;
			
			for(int i=0; i<3; i++){
				sum=0;
				for(int j=0; j<3; j++){
					cout<<arr[i][j]<<" ";
					sum=sum+arr[j][i];
				}
				cout<<" ==== > "<<sum;
				cout<<endl;				
			}
  
return 0;
}
