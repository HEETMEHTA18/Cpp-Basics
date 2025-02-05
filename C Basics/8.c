#include <stdio.h>

int main() {
    int n, x = 0, y = 0, z = 0, xi, yi, zi;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d %d", &xi, &yi, &zi);
        x += xi;
        y += yi;
        z += zi;
    }
    printf("%s\n", (x == 0 && y == 0 && z == 0) ? "YES" : "NO");
    return 0;
}
