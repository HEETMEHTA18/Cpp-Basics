#include <stdio.h>

int main() {
    double H = 1, L = 2;
    printf("%.12lf\n", (double)(L * L - H * H) / (2 * H));
    return 0;
}
