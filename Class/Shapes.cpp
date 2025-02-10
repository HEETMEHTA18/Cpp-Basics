#include <iostream>
#include <vector>
using namespace std;

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }
    double getArea() const {
        return length * width;
    }
    double getPerimeter() const {
        return 2 * (length + width);
    }
    void display() const {
        cout << "Length: " << length << ", Width: " << width
             << ", Area: " << getArea()
             << ", Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    vector<Rectangle> rectangles;
    int choice;
    do {
        cout << "\n=== Rectangle Management System ===\n";
        cout << "1. Add New Rectangle\n";
        cout << "2. Update Rectangle Dimensions\n";
        cout << "3. Display All Rectangles\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 1) {
            double l, w;
            cout << "Enter length: ";
            cin >> l;
            cout << "Enter width: ";
            cin >> w;
            rectangles.push_back(Rectangle(l, w));
            cout << "Rectangle added successfully!\n";
        } else if (choice == 2) {
            if (rectangles.empty()) {
                cout << "No rectangles available to update.\n";
            } else {
                int index;
                double l, w;
                cout << "Enter the index of the rectangle to update (starting from 0): ";
                cin >> index;
                if (index >= 0 && index < rectangles.size()) {
                    cout << "Enter new length: ";
                    cin >> l;
                    cout << "Enter new width: ";
                    cin >> w;
                    rectangles[index].setDimensions(l, w);
                    cout << "Rectangle updated successfully!\n";
                } else {
                    cout << "Invalid index.\n";
                }
            }
        } else if (choice == 3) {
            if (rectangles.empty()) {
                cout << "No rectangles to display.\n";
            } else {
                cout << "\n--- Rectangles ---\n";
                for (size_t i = 0; i < rectangles.size(); i++) {
                    cout << "Rectangle " << i << ": ";
                    rectangles[i].display();
                }
            }
        } else if (choice == 4) {
            cout << "Exiting the system. Goodbye!\n";
        } else {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);
    return 0;
}
