#include <stdio.h>
#include <math.h>

int main() {
    long long n = 6, m = 6, a = 4;
    long long tiles = ((n + a - 1) / a) * ((m + a - 1) / a);
    printf("%lld\n", tiles);
    return 0;
}
