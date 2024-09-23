// wap to create University class having data member,
// data member--> university_name, address, session, number_of_stream, number_of_college_affilated.
// member function --> parameterized constractor, setter(), getter().

// create a child class college having atrribute 
// data member: college_name, address, number_of_student.

// create a child class student having atrribute 
// data member: student_name, address.

#include<iostream>
using namespace std;
				class University{
						private:
						string university_name, address ;
						int session, number_of_stream, number_of_college_affilated;
				
						public:
//						University(string un, string add, int s, int ns, int nca){
//							university_name=un;
//							address=add;
//							session=s;
//							number_of_stream=ns;
//							number_of_college_affilated=nca;
//						}
						
						void university_set(){
							cout<<"Enter University name: ";
							cin>>university_name;
							cout<<"Enter a address: ";
							cin>>address;
							cout<<"Enter session: ";
							cin>>session;
							cout<<"Enter number of stream: ";
							cin>>number_of_stream;
							cout<<"Enter number of college affilated: ";
							cin>>number_of_college_affilated;
						}
						
						void university_get(){
							cout<<"University Name: "<<university_name<<endl;
							cout<<"University Address: "<<address<<endl;
							cout<<"Session: "<<session<<endl;
							cout<<"Stream: "<<number_of_stream<<endl;
							cout<<"College Affilated: "<<number_of_college_affilated<<endl;	
						}
						};
				
				class College: public University{
					public:
							string college_name, address;
							int number_of_student;
						void college_set(){
								cout<<"Enter College Name: ";
								cin>>college_name;
								cout<<"Enter College Address: ";
								cin>>address;
								cout<<"Number of student: ";
								cin>>number_of_student;
						} 
						
						void college_get(){
							cout<<"College name: "<<college_name<<endl;
							cout<<"Address: "<<address<<endl;
							cout<<"Student: "<<number_of_student<<endl;
						}
							
						};
						
						
				class Student: public College{
					public:
							string student_name, address;
							
						void student_set(){
								cout<<"Enter Student Name: ";
								cin>>student_name;
								cout<<"Enter Address: ";
								cin>>address;
						} 
						void student_get(){
							cout<<"Student name: "<<student_name<<endl;
							cout<<"Address: "<<address<<endl;
						}
						
						};
int main(){
			University u1;
			u1.university_set();
			u1.university_get();
			
			College c1;
			c1.college_set();
			c1.college_get();
			
			Student s1;
			s1.student_set();
			s1.student_get();

return 0;
}

