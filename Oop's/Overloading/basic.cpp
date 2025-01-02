// write a program to operator overloading.
#include<iostream>
using namespace std;
		class Product{
			int rice,dal;
			public:
				Product(int Kg,int grm){
					rice=Kg;
					dal=grm;
				}
			void operator +(Product obj){
				Product p(obj);
				p.rice=rice+obj.rice;
				p.dal=dal+obj.dal;
				cout<<"Kilo Gram: "<<p.rice<<endl;
				cout<<"Gram: "<<p.dal<<endl;
//				return p;
			}
		};

int main(){
	Product r(1,200);
	Product d(0,600);
	r+d;


return 0;
}

