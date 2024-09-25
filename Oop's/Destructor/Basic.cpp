#include<iostream>
using namespace std;
		class Parent{
			public:
				Parent(){
					cout<<"Parent Constructor \n";
				}
			 virtual ~ Parent(){
					cout<<"Parent Destructor \n";
				}
			};
		class Child:public Parent{
			public:
				Child(){
					cout<<"Child Constructor \n";
				}
			  ~ Child(){
					cout<<"Child Destructor \n";
				}
		};
		class GrantChild:public Child{
			public:
				GrantChild(){
					cout<<"Grant Child Constructor \n";
				}
			  ~ GrantChild(){
					cout<<"Grant Child Destructor \n";
				}
		};
		
int main(){
		Parent *basepointer=new GrantChild;
		delete basepointer;

return 0;
}

