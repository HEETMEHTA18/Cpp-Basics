#include <iostream>
using namespace std;

class DynArray {
    int *data;
    size_t sz, cap;
public:
    DynArray() : data(nullptr), sz(0), cap(0) {}
    ~DynArray() { delete[] data; }
    void push(int v) {
        if (sz == cap) {
            cap = cap ? cap * 2 : 1;
            int *tmp = new int[cap];
            for (size_t i = 0; i < sz; ++i) tmp[i] = data[i];
            delete[] data;
            data = tmp;
        }
        data[sz++] = v;
    }
    void removeAt(size_t idx) {
        if (idx >= sz) return;
        for (size_t i = idx; i + 1 < sz; ++i)
            data[i] = data[i + 1];
        --sz;
    }
    void print() const {
        for (size_t i = 0; i < sz; ++i) std::cout << data[i] << ' ';
        std::cout << std::endl;
    }
};

int main() {
    DynArray arr;
    arr.push(10);
    arr.push(20);
    arr.push(30);
    arr.removeAt(1);
    arr.print();
    return 0;
}
