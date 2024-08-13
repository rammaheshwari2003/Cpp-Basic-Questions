// write a program to determine the heights number and the lowest number amoung n number.
// write a program to take N input from user and add all of then.
// a) and also find sum of all even numbers, odd number seprately.
// b) finally add all the number between range 40 to 60.
// c) and also so there count.
#include<iostream>
using namespace std;

int main(){
			// multiple input and inner loop
			
			int n,sum=0,num;
			cout<<"Enter number: ";
			cin>>n;
			
			for(int i=1; i<=n; i++){
				cout<<"Enter a number: ";
				cin>>num;
				sum+=num;
			}
			cout<<"Total Sum of number is: "<<sum;			

                // even or odd
			int n,num,sum=0,even=0,odd=0;
			cout<<"Enter number: ";
			cin>>n;
			
			for(int i=1; i<=n; i++){
				cout<<"Enter a number: ";
				cin>>num;
				sum+=num;
				}
				
				if(num%2==0){
					cout<<"Even number: ";
					even+=num;
					
				}
				else{
					cout<<"Odd number: ";
					odd+=num;	
				}
				
				cout<<"sum: "<<sum<<endl;
				cout<<"Even sum: "<<even<<endl;
				cout<<"Odd sum: "<<odd;


return 0;
}
