#include<iostream>
using namespace std;

class GrantParent{
	public:
		int data;
		void f1(){
	 	 	cout<<"this is a function f1 of class Grant Parent 1\n";
		  }		
};
class Parent1:public GrantParent{
	 public:
	 	void f2(){
	 	 	cout<<"this is a function f2 of class Parent 1\n";
		  }		 	 
};
class Parent2: public GrantParent{
	 public:
	 	
	 	 void f3(){
	 	 	cout<<"this is a function f3 of class Parent 2\n";
		  }	
};
class Child: public  Parent1 ,public Parent2 {
	 
};

int main(){
	Child obj;
	obj.f1();	obj.f2();	obj.f3();
    return 0;
}

