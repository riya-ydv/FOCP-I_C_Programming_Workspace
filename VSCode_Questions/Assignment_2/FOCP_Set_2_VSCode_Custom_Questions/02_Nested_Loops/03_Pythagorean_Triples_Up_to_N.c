#include <stdio.h>
int main(void) {
    int n, a, b, c, found = 0;
    long long aSquared, bSquared, cSquared;
    scanf("%d", &n);
    for (a = 1; a <= n; a++) {
        aSquared = (long long)a * a;
        for (b = a + 1; b <= n; b++) {
            bSquared = (long long)b * b;
            for (c = b + 1; c <= n; c++) {
                cSquared = (long long)c * c;
                if (aSquared + bSquared == cSquared) {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }
    if (found == 0) printf("None\n");
    return 0;
}
