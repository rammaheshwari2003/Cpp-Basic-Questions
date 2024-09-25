// number of customer count.
#include<iostream>
using namespace std;
		class Bank{
			private:
				int balance;
				string name;
			static	int count;
			public:
//				Bank(int bl, string n){
//					balance=bl;
//					name=n;
//					count++;
//				}
				Bank(int bl,string n);
//				void display(){
//					cout<<"Name: "<<name<<" Balance: "<<balance<<endl;
//				}
				void display();
				static void number_customer(){
					cout<<"Total customer: "<<count<<endl;
				}
		};

	int Bank::count=0;
	void Bank::display(){
			cout<<"Name: "<<name<<" Balance: "<<balance<<endl;
	}

	Bank::Bank(int bl, string n){
		balance=bl;
		name=n;
		count++;
	}

int main(){
			Bank obj(500,"ram"),obj1(1000,"Pawan");
			Bank::number_customer();
			obj.display();	

return 0;
}

