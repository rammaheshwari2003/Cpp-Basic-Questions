#include<iostream>
using namespace std;
//		void swap(int a, int b){
		void swap(int *a, int b){

			a=a+b;
			b=a-b;
			a=a-b;
			cout<<"Value of a= "<<a<<endl;
			cout<<"Value of b= "<<b<<endl;
		}
int main(){
	  int x,y;
	  cout<<"Enter 2 number: ";
	  cin>>x>>y;
	  
	  swap(x,y);
	  cout<<"Value of x= "<<x<<endl;
	  cout<<"Value of y= "<<y<<endl;
	  

return 0;
}
