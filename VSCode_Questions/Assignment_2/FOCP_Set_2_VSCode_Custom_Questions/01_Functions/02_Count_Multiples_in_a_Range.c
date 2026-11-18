#include <stdio.h>
int countMultiples(int n, int k) {
    if (n <= 0 || k <= 0) return 0;
    return n / k;
}
int main(void) {
    int n, k, result;
    scanf("%d %d", &n, &k);
    result = countMultiples(n, k);
    printf("%d\n", result);
    return 0;
}
