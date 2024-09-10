// wap to find out the addition of three number.
#include<iostream>
using namespace std;

	// void add(int,int,int)   // prototype, signature, decleration		
		void add(int num1, int num2, int num3){  // formal parameter
				cout<<"control goes to add()\n";
				cout<<"Addition : "<<num1+num2+num3<<endl;
			}
			
			
int main(){
			int number1, number2, number3;
			cout<<"Enter 3 number ";
			cin>>number1>>number2>>number3;
			add(number1, number2, number3); // actual parameter
			cout<<"control back to main";
			
return 0;
}
