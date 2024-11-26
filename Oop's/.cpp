// W.a.p to create two functions factorial and cube using function define outside of class ?


#include<iostream>
using namespace std;
		class Operation{
			public:
				void factorial(int n);
				void cube(int n);
		};
	void Operation::factorial(int n){
		int f=1;
		for(int i=n; i>0; i--){
			f=f*i;
		}
		cout<<"Factorial : "<<f<<endl;
	}
	void Operation::cube(int n){
		cout<<n<<" Cube of : "<<n*n*n;
	}

int main(){
			int n,base;
			cout<<"Enter a number : ";
			cin>>n;
			
			Operation o;
			o.factorial(n);
			o.cube(n);

return 0;
}
