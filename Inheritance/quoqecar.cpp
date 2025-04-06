#include <iostream>
#include <string>
#include <queue>
using namespace std;

// Base class for Fuel Type
class FuelType {
protected:
    string fuel;
public:
    FuelType(string f) : fuel(f) {}
    void displayFuel() const {
        cout << "Fuel Type: " << fuel << endl;
    }
};

// Base class for Brand
class Brand {
protected:
    string brand;
public:
    Brand(string b) : brand(b) {}
    void displayBrand() const {
        cout << "Brand: " << brand << endl;
    }
};

// Derived class for Car
class Car : public FuelType, public Brand {
private:
    string model;
public:
    Car(string b, string f, string m) : Brand(b), FuelType(f), model(m) {}

    void displayInfo() const {
        cout << "Model: " << model << endl;
        displayBrand();
        displayFuel();
        cout << "--------------------------" << endl;
    }
};

// Main function to simulate the service queue
int main() {
    queue<Car> serviceQueue;

    // Add cars to the queue
    serviceQueue.push(Car("Toyota", "Petrol", "Camry"));
    serviceQueue.push(Car("Tesla", "Electric", "Model S"));
    serviceQueue.push(Car("Ford", "Diesel", "Endeavour"));

    // Process the queue
    cout << "Processing cars in service queue:\n\n";
    while (!serviceQueue.empty()) {
        Car currentCar = serviceQueue.front();
        currentCar.displayInfo();
        serviceQueue.pop();
    }

    return 0;
}
