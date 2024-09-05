#include<iostream>
using namespace std;

int main(){
			int count=1;
			for(char i='A'; i<='Z'; i++){
				cout<<i;
				if(count%3==0){
					cout<<" $ ";
				}
				count++;
			}


return 0;
}

