#include<iostream>
using namespace std;
int axis(int cardno, int pwd){
	if(cardno==101 && pwd==1234){
	return 10000;
}
else {
	return 0;
}
}


int sbi(int cardno, int pwd){
	return 20000;
}
int main(){

int (*atm)(int,int);
atm=sbi;
int balance=atm(3,4);
cout<<"Sbi balance = "<<balance<<endl;

atm=axis;
balance=atm(101,1234);
cout<<"Axis balance = "<<balance<<endl;


return 0;
}
