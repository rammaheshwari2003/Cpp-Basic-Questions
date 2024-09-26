// Write a C++ program to define a class named Circle.
// private member: radius
// public member functions:calculate_area(),calculate_circumference()

#include<iostream>
using namespace std;
		class Circle{
			private:
				double radius;
				
			public:
				Circle(double r){
					radius=r;
				}
				void calculate_area(){
					cout<<"Area: "<< 3.14 * radius * radius<<endl;
				}
				void calculate_circumference(){
					cout<<"Circumference: "<< 2 * 3.14 * radius<<endl;
				}
		};
int main(){
	double radius;
	cout<<"Enter a radius: ";
	cin>>radius;
	
	Circle c1(radius);
	c1.calculate_area();
	c1.calculate_circumference();

return 0;
}

