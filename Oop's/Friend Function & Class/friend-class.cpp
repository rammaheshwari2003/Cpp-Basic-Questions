#include<iostream>
using namespace std;
		class Bank{
			private:
				int balance;
				string name;
			public:
			Bank(int b, string n){
				balance=b;
				name=n;
			}
			void display(){
				cout<<" Name: "<<name<<" Balance: "<<balance;
			}
		friend class Phonepe;    // decleared
		};
		
	class Phonepe{
			public: 
				void deposite(Bank &obj, int amount){
					obj.balance=obj.balance+amount;
				}
				void withdraw(Bank &obj, int amount){
					obj.balance=obj.balance-amount;
				}
		
	};
int main(){
		Bank obj(40000, "Ram");
		obj.display();
		Phonepe obj_ph;
		obj_ph.deposite(obj,8000);
		obj.display();
return 0;
}

