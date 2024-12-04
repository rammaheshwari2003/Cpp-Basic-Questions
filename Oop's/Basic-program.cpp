#include<iostream>
using namespace std;
class Cybrom{
	static int a;
	public:
//	static	void show(){
			void show(){
			a++;
			cout<<a<<"\t"; 
		}
};
int Cybrom::a=20;
//int Cybrom::a=10;
int main(){
		Cybrom c;
		c.show();
		c.show();
		
		Cybrom c1;
		c1.show();
		c1.show();
		
//		Cybrom::show();

return 0;
}
