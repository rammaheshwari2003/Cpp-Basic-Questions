// 2D array addition.
#include<iostream>
using namespace std;

int main(){
				int arr[3][3]={1,1,2,5,6,7,5,5,5};

	int sum=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<" ";
			sum+=arr[i][j];
		}
		cout<<endl;
		
	}
cout<<"Addition of all elements --> "<<sum;

return 0;
}
