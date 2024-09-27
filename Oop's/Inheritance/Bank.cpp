// Implement a base class BankAccount with methods for deposit and withdraw. Derive classes SavingsAccount and CheckingAccount.
#include<iostream>
using namespace std;
			class BankAccount{
				protected:
					int deposit;
					int withdraw;
				public:
					BankAccount(int dp, int w){
						deposit=dp;
						withdraw=w;
					}
				
			};
			class Saving :public BankAccount{
				private:
					string name;
				public:
				Saving(string nm, int dp, int w):BankAccount(dp,w){
					name=nm;
					deposit=dp;
					withdraw=w;
				}
				void display(){
					cout<<"Name: "<<name<<" Deposite: "<<deposit<<" Withdraw: "<<withdraw<<endl;
				}
			};
int main(){
		Saving s1("Ram",5000,2500);
		s1.display();

return 0;
}

