#include<iostream>
using namespace std;

int main(){
	int number1=99, number2=67;
	int &digit1=number1;   // reference
	digit1=900;
	cout<<number1;

return 0;
}

