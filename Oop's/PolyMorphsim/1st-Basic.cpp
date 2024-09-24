#include<iostream>
using namespace std;
class Add{
			public:
		void add(int number1, int number2){
			cout<<"With int, int \n";
			cout<<"addition: "<<number1+number2<<endl;
		}
//		void add(double number1, int number2){
//			cout<<"With double, int \n";
//			cout<<"addition: "<<number1+number2<<endl;
//		}
		void add(int number1, int number2,int number3){
			cout<<"With int, int,int \n";
			cout<<"addition: "<<number1+number2+number3<<endl;
		}
	};
int main(){
	Add a1;
	a1.add(2,5);
	a1.add(5,5,8);
	
//		add(4,8);
//		add(2.4,3.8);
//		add(5,5,10);

return 0;
}

