// WAP to find the area of square taking all essential input in function itself,and return result.(main print)
#include<iostream>
using namespace std;
			int Find_area_square(){
				double side;
				cout<<"Enter the side of the square: ";
				cin>>side;
				
				return side * side;
			}
int main(){
			double area = Find_area_square();
			cout<<"The area of the square is: "<<area;			
			


return 0;
}

