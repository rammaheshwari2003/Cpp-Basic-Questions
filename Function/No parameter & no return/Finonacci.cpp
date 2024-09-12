// Write a program to print Fibonacci series of n terms where n is input by user : 0 1 1 2 3 5 8 13 24 ..... 
// parameter -->no
// return --->no
#include<iostream>
using namespace std;
				void PrintFibanocci(){
					int number, num1=0, num2=1;
					cout<<"Enter a number: ";
					cin>>number;
					
					cout<<num1<<" "<<num2<<" ";
					for(int i=1; i<=number-2; i++){
						int sum=num1+num2;
						cout<<sum<<" ";
						num1=num2;
						num2=sum;
					}
				}
int main(){
			PrintFibanocci();
			

return 0;
}

