#include<iostream>
using namespace std;
			class Student{
				private:
					int marks;
				public:
					Student(int m){
						marks=m;
					}
					Student operator +(Student obj){      // obj=s2
						Student temp(0);
						temp.marks=marks+obj.marks;
						return temp;
					}
					void display(){
						cout<<marks;
					}
			};
int main(){
		Student s1(23),s2(34),s3(50);
		Student result=s1+s2+s3;
		result.display();


return 0;
}

