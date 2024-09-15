// pointer arithmetic
#include<iostream>
using namespace std;

int main(){
			int num1=90, num2=88;
			int *ptr1=&num1, *ptr2=&num2;
			cout<<"Address of number 1: "<<ptr1<<endl;
			cout<<"Address of number 2: "<<ptr2<<endl;
			
//			ptr2=ptr2+1;
//			cout<<"Address of number 1: "<<ptr1<<endl;
//			cout<<"Address of number 2 : "<<ptr2<<endl;
//			cout<<"Add of both: "<<*ptr1+*ptr2<<endl;
			
			ptr1=ptr1-1;
			cout<<"Address of number 1: "<<ptr1<<endl;
			cout<<"Address of number 2 : "<<ptr2<<endl;
			cout<<"Add of both: "<<*ptr1+*ptr2<<endl;

return 0;
}

