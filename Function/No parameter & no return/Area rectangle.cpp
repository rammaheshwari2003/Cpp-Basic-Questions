// WAP to find the area of rectangle taking all essential input in function itself
// parameter -->no
// return --->no

#include<iostream>
using namespace std;
				void area_of_rectangle(){
					double length, width;
					cout<<"Enter length: ";
					cin>>length;
					cout<<"Enter width: ";
					cin>>width;
					
					double area= length * width;
					cout<<"Area of rectangle : "<<area;
				}
int main(){
			area_of_rectangle();

return 0;
}

