#include<iostream>
using namespace std;

int main(){
			int n,temp,sum=0,last;
			
			cout<<"Enter Number : ";
			cin>>n;
			
			temp=n;
			while(n>0){
				last=n%10;
				sum=sum*10+last;
				n=n/10;
				
			}
			if(temp==sum){
				cout<<"palindrome";
			}
			else{
				cout<<"not";
			}

return 0;
}
