// write a c++ program to count object.
#include<iostream>
using namespace std;
	class Counter{
		private:
			static int objCount;
		public:
			Counter(){
				objCount++;
			}
			~Counter(){
				objCount--;
			}
			static int getobjCount(){
				return objCount;
			}
	};
int Counter::objCount=0;
int main(){
	cout<<"Initial count after creating obj1 "<<Counter::getobjCount()<<endl;
	
	cout<<"Object count after creating obj2 "<<Counter::getobjCount()<<endl;
	
	cout<<"Object count after creating obj3 "<<Counter::getobjCount()<<endl;

	cout<<"Object count after obj3 is destroyed "<<Counter::getobjCount()<<endl;



return 0;
}
