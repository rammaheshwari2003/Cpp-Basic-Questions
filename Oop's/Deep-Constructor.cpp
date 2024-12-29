// Write a program using deep copy constructor
#include<iostream>
using namespace std;
		class Employee{
			private:
				string name;
				int* id;
			public:
				Employee(string n, int i){
					name=n;
					id=new int;
					*id=i;
					
				}
			// deep
			Employee(const Employee& emp){
				name=emp.name;
				id=new int;
				*id=*emp.id;
			}
			
			void display(){
				cout<<"Name: "<<name<<endl;
				cout<<"Id: "<<*id<<endl;
			}
		};
int main(){
		Employee e1("john",121);
		e1.display();
		
		Employee e2(e1);
		e2.display();

return 0;
}

