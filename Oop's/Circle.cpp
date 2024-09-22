// Write a class named Circle constructed by a radius and two methods which will compute the area and the perimeter of a circle
#include<iostream>
using namespace std;
				class Circle{
					public:
					double radius, area, perimeter;
					
					void input(){
						cout<<"Enter a raduis: ";
						cin>>radius;
					}
					
					void process(){
						area=3.14 * radius * radius;
						perimeter=2 * 3.14 * radius;
					}
					void display(){
						cout<<"Area of circle: "<<area<<endl;
						cout<<"Perimeter of circle: "<<perimeter;
					}
				};
int main(){
			Circle crle1;
			crle1.input();
			crle1.process();
			crle1.display();

return 0;
}

