// Create a class to print the area of a square and a rectangle. The class has two functions with the same name but different number of parameters.
// The function for printing the area of rectangle has two parameters which are its length and breadth respectively while the other function for 
// printing the area of square has one parameter which is the side of the square.Create a class to print the area of a square and a rectangle.
// The class has two functions with the same name but different number of parameters. The function for printing the area of rectangle has two 
// parameters which are its length and breadth respectively while the other function for printing the area of square has one parameter 
// which is the side of the square.

#include<iostream>
using namespace std;
				class Shape{
						public:
					 void area_square(double side){
					 	int area=side * side;
					 	cout<<"Area of square : "<<area<<endl;
					 	
					 }
					 void area_rectangle(double length, double width){
					 	int area=length*width;
					 	cout<<"Area of rectangle: "<<area<<endl;
					 }
							
				};
int main(){
			Shape obj;
			obj.area_square(4.1);
			obj.area_rectangle(2.5,5.2);
return 0;
}

