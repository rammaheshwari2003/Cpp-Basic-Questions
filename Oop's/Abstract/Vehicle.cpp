// Write a program to display speed of different cars using abstract class name as a vehicle.
#include <iostream>
#include <string>
using namespace std;

// Abstract class Vehicle
class Vehicle {
protected:
    string brand;
    string model;
    double speed;
public:
    Vehicle(string b, string m, double s) {
        brand = b;
        model = m;
        speed = s;
    }

    virtual void displaySpeed() = 0; // Pure virtual function
};

// Derived class Car
class Car : public Vehicle {
public:
    Car(string b, string m, double s) : Vehicle(b, m, s) {}

    void displaySpeed() {
        cout << "The " << brand << " " << model << " has a top speed of " << speed << " km/h." << endl;
    }
};

// Derived class SportsCar
class SportsCar : public Vehicle {
public:
    SportsCar(string b, string m, double s) : Vehicle(b, m, s) {}

    void displaySpeed() {
        cout << "The " << brand << " " << model << " has a top speed of " << speed << " km/h, making it a high-performance vehicle." << endl;
    }
};

int main() {
    // Create objects of different car types
    Car car1("Toyota", "Corolla", 180);
    SportsCar car2("Porsche", "911", 320);
    Car car3("Honda", "Civic", 160);

    // Display speed of each car
    car1.displaySpeed();
    car2.displaySpeed();
    car3.displaySpeed();

    return 0;
}

