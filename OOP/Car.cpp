#include <iostream>
#include <vector>
using namespace std;

// Base class Car
class Car {
protected:
    string brand;
    string model;
    int year;
    double pricePerDay;

public:
    Car(string b, string m, int y, double price) {
        brand = b;
        model = m;
        year = y;
        pricePerDay = price;
    }

    virtual void displayDetails() {
        cout << brand << " " << model << " (" << year << ") - "
             << pricePerDay << "/day" << endl;
    }

    double getPricePerDay() {
        return pricePerDay;
    }

    string getBrand() { return brand; }
    string getModel() { return model; }
};

// Derived class RentalCar
class RentalCar : public Car {
    bool isAvailable;

public:
    RentalCar(string b, string m, int y, double price, bool available = true)
        : Car(b, m, y, price) {
        isAvailable = available;
    }

    bool rentCar() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Car rented successfully!" << endl;
            return true;
        } else {
            cout << "Sorry, this car is not available!" << endl;
            return false;
        }
    }

    void returnCar() {
        isAvailable = true;
        cout << "Car returned successfully!" << endl;
    }

    bool available() {
        return isAvailable;
    }

    void displayDetails() override {
        cout << brand << " " << model << " (" << year << ") - "
             << pricePerDay << "/day"
             << (isAvailable ? " [Available]" : " [Not Available]") << endl;
    }
};

// Customer class
class Customer {
    string name;
    int daysRented;

public:
    Customer(string n, int d) {
        name = n;
        daysRented = d;
    }

    double calculateBill(Car &c) {
        return daysRented * c.getPricePerDay();
    }

    string getName() {
        return name;
    }
};

// Main function
int main() {
    // Create rental cars
    vector<RentalCar> cars;
    cars.push_back(RentalCar("Toyota", "Corolla", 2020, 3000));
    cars.push_back(RentalCar("Honda", "Civic", 2021, 3500));
    cars.push_back(RentalCar("Suzuki", "Alto", 2019, 2000));

    cout << "=== Car Rental System ===" << endl;

    // Show available cars
    cout << "\nAvailable Cars:\n";
    for (int i = 0; i < cars.size(); i++) {
        cout << i + 1 << ". ";
        cars[i].displayDetails();
    }

    // Get customer details
    string name;
    int days, choice;
    cout << "\nEnter your name: ";
    getline(cin, name);
    cout << "Enter days to rent: ";
    cin >> days;
    cout << "Choose car (1-" << cars.size() << "): ";
    cin >> choice;

    if (choice < 1 || choice > cars.size()) {
        cout << "Invalid choice!" << endl;
        return 0;
    }

    RentalCar &selectedCar = cars[choice - 1];
    if (selectedCar.rentCar()) {
        Customer cust(name, days);
        double bill = cust.calculateBill(selectedCar);
        cout << "Total bill: " << bill << " PKR" << endl;

        // Returning car
        selectedCar.returnCar();
        cout << "Thank you, " << cust.getName() << "!" << endl;
    }

    return 0;
}
