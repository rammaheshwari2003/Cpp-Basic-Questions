// wap to create 2D array or display.
#include<iostream>
using namespace std;

int main(){
		int row,col;
		cout<<"Enter a row and column : ";
		cin>>row>>col;
		int marks[row][col];
		for(int i=0;i<row; i++){
			for(int j=0; j<col; j++){
				cout<<"Enter Data : "<<i<<j<<endl;
				cin>>marks[i][j];
			}
		}
		for(int i=0; i<row; i++){
			for(int j=0; j<col; j++){
				cout<<"marks at index "<<i<<j<<" = "<<marks[i][j]<<endl;;
			}
		}


return 0;
}
