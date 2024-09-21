// wap to add 2 numbers using pointer 
#include<iostream>
using namespace std;

int main(){
			int num1,num2,sum;
			
			cout<<"Enter a 1st number: ";
			cin>>num1;
			cout<<"Enter a 2nd number: ";
			cin>>num2;
			
			int *ptr1=&num1;
			int *ptr2=&num2;
			int *ptrSum= &sum;
			*ptrSum=*ptr1 + *ptr2;
			cout<<"Add: "<<*ptrSum;
return 0;
}

