// Create a base class Shape with methods to calculate area and perimeter. Derive classes Circle and Rectangle.
#include<iostream>
using namespace std;
		class Shape{
			public:
				double calculate_area;
				double calculate_perimeter;
		};
		class Circle: public Shape{
			private:
				double radius;
			public:
			Circle(double r){
				radius=r;
			}
			void calculate_area(){
			cout<<"Circle Area: "<<3.14*radius*radius<<endl; 
			}
			void calculate_perimeter(){
			
				cout<<"Circle Perimeter: "<<2*3.14*radius<<endl;
			}
		};
		
		class Rectangle{
			public:
				double length, width;
			Rectangle(double l, double w){
				length=l;
				width=w;
			}
			void calculate_area(){
				cout<<"Rectangle area: "<<length*width<<endl;
			}
			void calculate_perimeter(){
				cout<<"Rectangle perimeter: "<<2*(length+width)<<endl;
			}
		};
int main(){
		Circle c1(5.0);
		c1.calculate_area();
		c1.calculate_perimeter();
		
		Rectangle r1(2.2,5.5);
		r1.calculate_area();
		r1.calculate_perimeter();
		
		

return 0;
}

