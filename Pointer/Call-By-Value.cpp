// call by value
#include<iostream>
using namespace std;
					void great_zero(int *n1,int *n2, int *n3){
				if(*n1>*n2 && *n1>*n3){
					*n1=0;
				}
				else if(*n2>*n1 && *n2>*n3){
					*n2=0;
				}
				else{
					*n3=0;
				}
			}
int main(){
			// task:- wap to demontrate call by value and call by reference by creating two funtcion. function great_zero(), parameter = 3 int, return = void.
			
			 
			
			int num1,num2,num3;
			cout<<"Enter a Number1 , Number2 and Number3 ";
			cin>>num1>>num2>>num3;
			great_zero(&num1,&num2,&num3);
			cout<<num1<<" "<<num2<<" "<<num3;
			
			  

return 0;
}

