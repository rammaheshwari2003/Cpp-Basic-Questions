#include<iostream>
using namespace std;

				class GrandParent{
					public:
						int number;
				};
				class Parent1:virtual public GrandParent{
				};
				class Parent2:virtual public GrandParent{
					
				};
				class Child: public Parent1, public Parent2{
					
				};

int main(){
		cout<<"GP: "<<sizeof(GrandParent)<<endl;
		cout<<"p1: "<<sizeof(Parent1)<<endl;
		cout<<"p2: "<<sizeof(Parent2)<<endl;
		cout<<"c: "<<sizeof(Child)<<endl;
		
		Child obj;
		obj.number=90;
		obj.Parent1::number=80;
		obj.Parent2::number=23;
		cout<<obj.number<<endl;

return 0;
}

