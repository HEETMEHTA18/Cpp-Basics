#include <iostream>

class Shape
{
protected:
    double r;

public:
    Shape(double r) : r(r) {}
};
class Circle : public Shape
{
public:
    Circle(double r) : Shape(r) {}
    double area()
    {
        return 3.14159 * r * r;
    }
};

int main()
{
    Circle c(5);
    std::cout << "Area: " << c.area() << "\n";
}
