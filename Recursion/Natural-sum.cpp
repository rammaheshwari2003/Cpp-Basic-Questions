// write a recursive function to calculate the sum of the firste n natural numbers.
#include<iostream>
using namespace std;
				int sum_natural_number(int number){
					if(number <= 1)
					return number;
					else
					return number + sum_natural_number(number - 1);
				}
				
int main(){
			int number;
			cout<<"Enter a number: ";
			cin>>number;
			
			cout<<sum_natural_number(number);
				
return 0;
}

