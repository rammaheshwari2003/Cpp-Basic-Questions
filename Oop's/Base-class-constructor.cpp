// calling base class constructor in derived class
#include<iostream>
using namespace std;
				class University{
					protected:
						string university_name;
						int number_of_college_affilated;
					public:
						University(string un){
							university_name=un;
//							number_of_college_affilated=numC;
							cout<<"University ";
						}
				};
				
				class College:public University{
					protected:
						string college_name;
						public:
							College(string un, string CN): University(un){
								college_name=CN;
								cout<<"college";
							}
				};
				
				class Student: public College{
					protected:
						string student_name;
					public:
						Student(string un,string CN, string name):College(un,CN){
							student_name=name;
							cout<<"Student";
						}
						void display(){
							cout<<"University Name: "<<university_name<<endl;
//							cout<<"Number of college affilated: "<<number_of_college_affilated<<endl;
							cout<<"College Name: "<<college_name<<endl;
							cout<<"Student Name: "<<student_name<<endl;
						}
				};
int main(){
			Student obj("RGPV","NRI","XYZ");
			obj.display();

return 0;
}
