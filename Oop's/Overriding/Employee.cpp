#include<iostream>
using namespace std;
			class Employee{
				public:
				virtual	void prepare_salary(){
						cout<<"Salary prepare employee \n";
					}
					void promotion(){
						cout<<"if employee year>4 ---> promotion \n";
					}
			};
			class Executive : public Employee{
				public:
					void prepare_salary(){
						cout<<"Salary prepare executive +salary+perks+shares+house....\n";
					}
			};
int main(){
//			Executive exc1;
//			exc1.prepare_salary();
//			exc1.promotion();
//			
			
//			Executive *ptr1=new Executive;
//			ptr1->prepare_salary();
//			ptr1->promotion();

			Employee *base_pointer;            // base pointer
			Executive obj; 
			base_pointer=&obj;       // Executive object
			
	// Employee *base_pointer=new Executive;
			base_pointer->prepare_salary();
			base_pointer->promotion();
 

//
//Employee *ptr1=new Employee;
//			ptr1->promotion();
//			ptr1->prepare_salary();

			

return 0;
}

