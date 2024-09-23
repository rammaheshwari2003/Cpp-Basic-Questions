#include<iostream>
using namespace std;

		class School{
			private:
				int *roll;
				string school_name;

			public:
					School(int r, string sch){   // parameterized
						school_name=sch;
						roll=new int;
						*roll=r;
					}
					
//		School(const School &s1){   		// cello copy constructor
//			school_name=s1.School_name;
//			roll=s1.roll;
//		}

		School(const School &s1){    // deep copy constructor
			school_name=s1.school_name;
			roll=new int;
			*roll=*s1.roll;
		}
		
		void change_roll(int rl){
			*roll=rl;
		}
		 
		 void display(){
		 	cout<<"Roll: "<<*roll<<endl;
		 	cout<<"School: "<<school_name<<endl;
		 }
		};
int main(){
			School s1(101,"KVS");
			s1.display();
			
			School s2(s1);
			s2.display();
			
			s2.change_roll(102);
			s1.display();
			s2.display();

return 0;
}

