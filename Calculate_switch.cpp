// write a program to create calculator using switch case.
#include<iostream>
using namespace std;

int main(){
			int num1,num2;
			char choice;
			cout<<"Enter num1 and num2: ";
			cin>>num1>>num2;
			cout<<"Enter your choice , +,-,*,/: ";
			cin>>choice;
			
			switch(choice){
				case '+': cout<<"Add: "<<num1+num2;
				break;
				
				case '-' : cout<<"Sub: "<<num1-num2;
				break;
				
				case '*' : cout<<"Multi: "<<num1*num2;
				break;
				
				case '/' : cout<<"Div: "<<num1/(float)num2;
				break;
				
				default : cout<<"Invalid Choice: ";
				break;
			}
			
return 0;
}
