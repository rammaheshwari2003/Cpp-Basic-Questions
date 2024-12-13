// Pure Virtual Function :- it is initialized by zero, A class which content a pure virtual function is called abstract class and we have to 
// override the pure virtual dunction in each child class. otherwise it will not allow to allowcated the memory object of a child class.
#include<iostream>
using namespace std;
class RBI{
	public:
		virtual void helpdesk()=0;
		void fun(){
			cout<<"/n";
		}
};

class SBI:public RBI{
	public:
		void loan(){
			cout<<"\n Interest rate 9%";
		}
		void helpdesk(){
			cout<<"\n May i help you";
		}
};

class Axis:public RBI{
	public:
		void loan(){
			cout<<"\n Interest rate 12%";
		}
		void helpdesk(){
			cout<<"\n May i help you";
		}
};
int main(){
		RBI *r;
		SBI s;
		r=&s;
		r->helpdesk();
		Axis a;
		r=&a;
		r->helpdesk();

return 0;
}
