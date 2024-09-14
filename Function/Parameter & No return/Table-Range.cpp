// Write a program that ask the user two input .  print the multiplication table of that range of numbers(nesting)
// parameter -->int,int(range)
// return --->no return
#include<iostream>
using namespace std;
				int multi_table_range(int num, int range){
					for(int i=num; i<=range; i++){
				for(int j=1; j<=10; j++){
					cout<<i<<" * "<<j<<" = "<<i*j<<endl;
				}
				cout<<endl;
					}
				}
int main(){
			int num, range;
			cout<<"Enter a positive number: ";
			cin>>num;
			
			cout<<"Enter a range: ";
			cin>>range;
			
			multi_table_range( num,range);
			

return 0;
}

