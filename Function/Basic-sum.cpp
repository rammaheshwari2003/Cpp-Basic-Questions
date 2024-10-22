#include<iostream>
using namespace std;

int add(int num1, int num2, int num3){  // formal parameter
				return num1+num2+num3;
			}

int main(){
	int number1, number2, number3;
	cout<<"Enter 3 number ";
	cin>>number1>>number2>>number3;
	int result=add(number1, number2, number3); // actual parameter
	cout<<"result"<<result;
}
