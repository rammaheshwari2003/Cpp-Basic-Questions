// Write a program to find max value by private Data members of classes named as top1 and top2 using friend function.
#include<iostream>
using namespace std;

class Top2;
		class Top1{
			private:
				int num1;
				public:
					Top1(int n){
						num1=n;
					}
			friend void max_value(Top1,Top2);
		};
		class Top2{
			private:
				int num2;
				public:
					Top2(int n){
						num2=n;
					}
			friend void max_value(Top1,Top2);
		};
	
	void max_value(Top1 obj1, Top2 obj2) {
    if (obj1.num1 > obj2.num2)
        cout << "Maximum value: " << obj1.num1 << endl;
    else
        cout << "Maximum value: " << obj2.num2 << endl;
}
int main(){
		Top1 t1(500);
		Top2 t2(200);
		max_value(t1,t2);
		
return 0;
}
