// Write a C++ program to define a class named  Person.
// private member: name, age and country
// constructor: initialized values (parameterized)
// public member functions:getter()--->to get all values
//                        change_age()--->to change the age of given objects.

#include<iostream>
using namespace std;
			class Person{
				private:
					string name;
					int age;
					string country;
					
				public:
					Person(string n, int a, string c){
						name=n;
						age=a;
						country=c;
					}
					void get(){
						cout<<"Name: "<<name<<endl;
						cout<<"Age: "<<age<<endl;
						cout<<"Country: "<<country<<endl;
					}
					void change_age(int new_age){
						age=new_age;
					}
					
					
			};
int main(){
		Person p("Ram",21,"India");
		p.get();
		
		p.change_age(22);
		p.get();

return 0;
}

