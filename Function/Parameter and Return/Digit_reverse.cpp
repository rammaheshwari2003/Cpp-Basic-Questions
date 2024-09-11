// wap to that prompts the user to input an integer and then output the number with the digits reversed.
// parameter --> int
// return --> int
#include<iostream>
using namespace std;
			
			int rev(int num){
				int last,sum=0;
				while(num>0){				
				last=num%10;
				sum=sum*10+last;
				 num=num/10;
		}
				return sum;
				
			}

int main(){
			int num;
			cout<<"Enter a number : ";
			cin>>num;
			
			int result=rev (num);
			cout<<result;

return 0;
}

