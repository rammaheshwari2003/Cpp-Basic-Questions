// static variable, static function in oops.
#include<iostream>
using namespace std;
			class Cybrom{
				private:
					int enroll;
					string student_name;
					static string institute_name;
				public:
					Cybrom(int err,string name){
						enroll=err;
						student_name=name;
					}
				static void change_institute(string new_name){
					institute_name=new_name;
				} 
				void display(){
					cout<<"Student Name: "<<student_name<<endl;
					cout<<"Student Institute Name: "<<institute_name<<endl;
					cout<<"Student Enroll: "<<enroll<<endl;
				}
			};
			
	string Cybrom::institute_name="Cybrom";
int main(){
			Cybrom obj1(101,"Ram"),obj2(102,"Pawan");
			obj1.display();
			obj2.display();
			
//		obj1.institute_name="Cybrom Infotech";      // unhealthy coding
//		obj1.display();
//		obj2.display();

//			Cybrom::institute_name="Cybrom Infotech";
//			obj1.display();
//			obj2.display();
			Cybrom::change_institute("Cybrom Infotech");
			obj1.display();
			obj2.display();

return 0;
}

