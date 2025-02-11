#include <iostream>
using namespace std;

class Rectangle {
    double length, width;
public:
    Rectangle(double l = 0, double w = 0) : length(l), width(w) {}
    void setDimensions(double l, double w) { length = l; width = w; }
    double getArea() const { return length * width; }
    double getPerimeter() const { return 2 * (length + width); }
    void display() const {
        cout << "Length: " << length << ", Width: " << width
             << ", Area: " << getArea()
             << ", Perimeter: " << getPerimeter() << endl;
    }
};

int main() {
    const int MAX_RECTANGLES = 100;
    Rectangle rectangles[MAX_RECTANGLES];
    int count = 0, choice, index;
    double l, w;
    
    while (true) {
        cout << "\n1. Add Rectangle  2. Update  3. Display  4. Exit\nChoice: ";
        cin >> choice;
        
        if (choice == 1 && count < MAX_RECTANGLES) {
            cin >> l >> w;
            rectangles[count++] = Rectangle(l, w);
        } else if (choice == 2 && count > 0) {
            cin >> index >> l >> w;
            if (index >= 0 && index < count) rectangles[index].setDimensions(l, w);
        } else if (choice == 3) {
            for (int i = 0; i < count; i++) {
                cout << "Rectangle " << i << ": ";
                rectangles[i].display();
            }
        } else if (choice == 4) break;
        else cout << "Invalid choice or operation not possible.\n";
    }
    return 0;
}
