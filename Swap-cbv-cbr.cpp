// wap to swap the value of 2 variable with each other using call by value and call by reference.
#include<iostream>
using namespace std;
				// call by value
				
					int Swap_value(int n1, int n2){
						n1 = n1 + n2;
						n2 = n1 - n2;
						n1 = n1 - n2;
					}
					
					// call by reference
					
					int Swap_reference(int &number1, int &number2){
							int temp;
							temp = number1;
							number1 = number2;
							number2 = temp;
					}
int main(){
			int num1,num2;
			cout<<"Enter a number1 and number2: ";
			cin>>num1>>num2;
			
			Swap_value(num1, num2);
			cout<<"Swap value: "<<num1<<" "<<num2<<endl;
			
			Swap_reference(num1,num2);
			cout<<"Swap reference: "<<num1<<" "<<num2;
			
			

return 0;
}

