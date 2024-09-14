//  Write a program that ask the user to input a positive integer.  It should then print the multiplication table of that number.
//  parameter -->int
//  return --->no return 
#include<iostream>
using namespace std;

				int multiplication_table(int number){
						for(int i=1; i<=10; i++){
								cout<<number<<" * "<<i<<" = "<<number*i<<endl;
						}
				}

int main(){
				int number;
				cout<<"Enter a positive number: ";
				cin>>number;
				 multiplication_table(number);
				 
				

return 0;
}

