// wap to find the highest between 2 using pointer.
#include<iostream>
using namespace std;

int main(){
			int num1, num2;
			cout<<"Enter 1st number: ";
			cin>>num1;
			
			cout<<"Enter 2nd nummber: ";
			cin>>num2;
			
			int *ptr1=&num1;
			int *ptr2=&num2;
			
			
			if(*ptr1 > *ptr2){
				cout<<"Highest no. p1 : "<<*ptr1;
			}
			
			else{
					cout<<"Highest no. p2 : "<<*ptr2;
			}
			
return 0;
}

