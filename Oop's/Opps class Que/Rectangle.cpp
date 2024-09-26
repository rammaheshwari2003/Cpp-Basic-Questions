// Write a C++ program to define a class named  Rectangle.
// private member:length and width
// public member functions:calculate_area(),calculate_perimeter()

#include<iostream>
using namespace std;
			class Rectangle{
				private:
					double length, width;
				public:
					Rectangle(double l, double w){
						length=l;
						width=w;
					}
					void calculate_area(){
						cout<<"Area : "<<length*width<<endl;
					}
					void calculate_perimeter(){
						cout<<"Perimeter: "<< 2 * (length + width)<<endl;
					}
			};
int main(){
		double length, width;
		cout<<"Enter The Length and Width: ";
		cin>>length>>width;
		
		Rectangle r1(length, width);
		r1.calculate_area();
		r1.calculate_perimeter();
		
	

return 0;
}

