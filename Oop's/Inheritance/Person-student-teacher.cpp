// Design a base class Person with name and address attributes. Derive classes Student and Teacher from Person. Inheritance
#include<iostream>
using namespace std;
		// base class
		class Person{
			public:
				string name;
				string addresse;
			Person(string nm, string add){
				name=nm;
				addresse=add;
			}
			void display(){
				cout<<"Name: ";
				cout<<"Addresse: ";
			}
		};
		
		// derive class
	class Student: public Person{
		private:
			int Id;
		public:
			Student(string nm, string add, int id):Person(nm,add){
				Id=id;
			}
		void display(){
			cout<<"Student Details: "<<endl;
			cout<<"ID: "<<Id<<" Name: "<<name<<" Addresse: "<<addresse<<endl;
		}
	};
	
	class Teacher: public Person{
		private:
				int Mobile_no;
		public:
				Teacher(string nm, string add, int Mn): Person(nm,add){
					Mobile_no=Mn;
				}
			void display(){
				cout<<"Teachers Detail: "<<endl;
				cout<<"Name: "<<name<<" Address: "<<addresse<<" Mobile no.: "<<Mobile_no<<endl;
			}
	};
int main(){
		Student s1("Ram","Bhopal",101);
		s1.display();
		Teacher t1("Bhanu Sir","Sehore",9528);
		t1.display();

return 0;
}

