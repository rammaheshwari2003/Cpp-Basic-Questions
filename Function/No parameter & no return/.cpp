// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another. 
// parameter -->no
// return --->no
#include<iostream>
#include<cmath>

using namespace std;
					double 	FindPower(){
						int base, cube, result;
						cout<<"Enter a base number: ";
						 cin>>base;
						 cout<<"Enter the cube: ";
						 cin>>cube;
						 
						 result=pow(base,cube);
						 cout<< base << " raised to the power of " << cube << " is: "<<result;
					}
int main(){
		FindPower();
		


return 0;
}

