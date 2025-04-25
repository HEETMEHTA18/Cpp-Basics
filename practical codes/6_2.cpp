#include <iostream>

class Point {
    int x, y;
public:
    Point(int xx, int yy) : x(xx), y(yy) {}
    Point& shift(int dx, int dy) {
        x += dx; y += dy;
        return *this;
    }
    void print() const { std::cout << "(" << x << "," << y << ")\n"; }
};

int main() {
    Point p(0,0);
    p.shift(2,3).shift(-1,4);
    p.print();
    return 0;
}
