// write a program to find the sum of N natural number start from one. and also display the given format.
#include<iostream>
using namespace std;

int main(){
			int n,sum=0;
			cout<<"Enter number: ";
			cin>>n;
			for(int i=1; i<=n; i++){
				cout<<i;
				
				if(i<n){
					cout<<"+";
				}
				sum+=i;
				
				
			}
			
			cout<<" = "<<sum<<endl;
			

return 0;
}
