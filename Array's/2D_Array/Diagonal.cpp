#include<iostream>
using namespace std;

int main(){
			int arr[3][3]={1,1,2,5,6,7,1,2,5};
			int new_arr[3][3];
			for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					cout<<arr[i][j]<<" ";
					if(i==j){
					new_arr[i][j]=arr[i][j];
					
				}
					else
					new_arr[i][j]=0;
				}
				cout<<endl;
			}
			cout<<"Diagonal array print"<<endl;
			for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					cout<<new_arr[i][j]<<" ";
	}
	cout<<endl;
}
		
return 0;
}
