#include <iostream>
#include <vector>

template <typename T>
class Collection {
    std::vector<T> data;
public:
    void add(T v) { data.push_back(v); }
    T max() { T m = data[0]; for (T v : data) if (v > m) m = v; return m; }
    void reverse() { for (int i = 0, n = data.size(); i < n / 2; i++) std::swap(data[i], data[n - i - 1]); }
    void display() { for (T v : data) std::cout << v << " "; std::cout << "\n"; }
};

int main() {
    Collection<int> c; c.add(3); c.add(8); c.add(1);
    std::cout << "Max: " << c.max() << "\n"; c.reverse(); c.display();
}
