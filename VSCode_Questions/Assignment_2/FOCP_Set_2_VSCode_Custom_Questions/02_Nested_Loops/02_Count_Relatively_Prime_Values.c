#include <stdio.h>
int gcd(int a, int b) {
    int remainder;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main(void) {
    int n, m, x, count = 0;
    scanf("%d %d", &n, &m);
    if (n < 0 || m < 0) { printf("0\n"); return 0; }
    for (x = 1; x <= m; x++)
        if (gcd(x, n) == 1) count++;
    printf("%d\n", count);
    return 0;
}
