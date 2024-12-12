// Operator Overloading:-  Operator Overloading is used to redefine the nature of operator for non-primitive data type. 
// there are two types -- 1) unary 2) binary
// Note:--  it is used to solve the complex data type.
#include<iostream>
using namespace std;
class top{
	int x;
	public:
		top(int a){
			x=a;
			cout<<x<<endl;
		}
		
		void operator ++(){   // unary 
			x++;
			cout<<x<<endl;
		}
		
		void operator --(){   // unary 
			x--;
			cout<<x<<endl;
		}
};

int main(){
top t(3);
++t;
--t;

return 0;
}
