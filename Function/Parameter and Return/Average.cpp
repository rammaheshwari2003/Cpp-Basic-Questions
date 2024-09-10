// wap to create a function named average that is created to find out the average of 5 numbers.
//    parameter --> 5
//    return --> string (a message success)
#include<iostream>
#include<string>
using namespace std;
			string avg(int num1, int num2, int num3,int num4, int num5){
					int sum=num1+num2+num3+num4+num5/5;
					return "success";
					
			}
int main(){
			
				int number1=1, number2=2, number3=3, number4=4, number5=5;
				avg(number1, number2, number3,number4, number5);
//				cout<<result;
						
				
return 0;
}

