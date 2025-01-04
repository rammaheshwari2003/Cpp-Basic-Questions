// Write a cpp program to add two objects.
#include<iostream>
using namespace std;
class Point {
private:
    int x;
    int y;
public:
    // Constructor
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    // Overload + operator
    Point operator+(const Point& p) {
        return Point(x + p.x, y + p.y);
    }

    // Display point coordinates
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3);
    Point p2(4, 5);

    cout << "Point 1: ";
    p1.display();
    cout << "Point 2: ";
    p2.display();

    Point sum = p1 + p2; // Add two points using + operator

    cout << "Sum: ";
    sum.display();



return 0;
}

