#include<iostream>
using namespace std;
int main(){
  
int n; 
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
	cout<<"Enter a number at index: "<<i<<" :";
	cin>>arr[i];
}
for(int i=0;i<n;i++){
	cout<<"number at index "<<i<<" is : "<<arr[i]<<endl;
}
  return 0;
}


 
