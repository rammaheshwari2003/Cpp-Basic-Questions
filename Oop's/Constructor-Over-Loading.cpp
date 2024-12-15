// Constructor overloading:- if a class having more than one constructor.
#include<iostream>
using namespace std;
class Login{
	int code=1001;
	int pwd=2001;
	public:
/*		Login (){
			cout<<"Hello";
		}  */
		Login(int c, int p){
			if(c==code && p==pwd){
				cout<<"Welcome";
			}
			else{
				cout<<"Incorrect ";
			}
		}
};
int main(){
		int code, pwd;
		cout<<"Enter code : ";
		cin>>code;
		cout<<"Enter pwd: ";
		cin>>pwd;
		
//		Login l;
		Login l(code, pwd);
		
		
		

return 0;
}
