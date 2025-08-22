#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string brand;
    string model;
    int year;

public:
    void CarDetails() {
        cout << "enter the car brand : ";
        cin >> brand;
        cout << "enter car model: ";
        cin >> model;
        cout << "enter car year: ";
        cin >> year;
        cin.ignore();
    }

    void display() {
        cout << "Car Details " << endl;
        cout << "brand : " << brand <<endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.CarDetails();
    myCar.display();
    return 0;
}
