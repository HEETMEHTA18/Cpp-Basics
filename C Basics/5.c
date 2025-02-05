#include <stdio.h>
#include <math.h>

int main() {
    double a = 1, b = -7, c = 10, d, root1, root2;
    d = b * b - 4 * a * c;
    
    if (d >= 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f and %.2f\n", root1, root2);
    } else {
        printf("No real roots.\n");
    }
    
    return 0;
}
