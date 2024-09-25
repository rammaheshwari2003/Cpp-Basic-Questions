#include<iostream>
using namespace std;
		class Bank{
			public:
				int balance;
				string name;
				public:
					Bank(int bal, string nm){
						balance=bal;
						name=nm;
					}
					void display(){
						cout<<" Name: "<<name<<" Balance: "<<balance;
					}

				friend void deposit(Bank &obj,int amount);
				friend void withdraw(Bank &obj, int amount);
		};
		
			void deposit(Bank &obj,int amount){
				obj.balance+=amount;
			}

			void withdraw(Bank &obj, int amount){
				obj.balance-=amount;
			}

int main(){
			Bank obj(50000,"Ram");
			obj.display();
			deposit(obj,5000);
			obj.display();
			withdraw(obj,2500);
			obj.display();
			
			
return 0;
}

