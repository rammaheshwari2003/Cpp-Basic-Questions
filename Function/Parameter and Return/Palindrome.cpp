// wap to print whether a number is palindrome number or not.
// parameter --> int
// return --> string (a message "yes" or "not" )
#include<iostream>
using namespace std;
				string palindrome(int num){
					int temp=num;
					int last,sum=0;
					temp=num;
					while(num>0){
						last=num%10;
						sum=sum*10+last;
						num/=10;
					}
					if(temp==sum){
						return "yes";
					}
					else{
						return "not";
					}
				}
int main(){
				int num;
				cout<<"Enter a number : ";
				cin>>num;
				string result= palindrome(num);
				cout<<result;
				

return 0;
}

