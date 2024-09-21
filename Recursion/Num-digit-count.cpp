// write a recursive function to count the number of digits in a positive integer.
#include<iostream>
using namespace std;
				int count_number_digit(int num){
					if(num<10)
					return 1;
					else
					return 1 + count_number_digit(num/10);
				}
int main(){
			int num;
			cout<<"Enter a number: ";
			cin>>num;
			
			cout<<count_number_digit(num);
		

return 0;
}

