// wap to find the factorial of any number entered by user 
// parameter --> int
// return --> int (or long long in case of higher number) i.e. result
#include<iostream>
using namespace std;
				int fact(int num){
					int factorial=1;
					for(int i=1; i<=num; i++){
						factorial*=i;
						
			}
						return factorial;
				}

int main(){
			int num;
			cout<<"Enter a number : ";
			cin>>num;
			int result=fact(num);
			cout<<result;
			
			

return 0;
}

