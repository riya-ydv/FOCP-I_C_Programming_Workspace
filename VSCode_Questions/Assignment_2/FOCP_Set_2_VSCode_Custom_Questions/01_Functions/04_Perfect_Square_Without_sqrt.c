#include <stdio.h>
int isPerfectSquare(long long n) {
    long long i;
    if (n < 0) return 0;
    if (n == 0 || n == 1) return 1;
    for (i = 1; i <= n / i; i++) {
        if (i * i == n) return 1;
    }
    return 0;
}
int main(void) {
    long long n;
    int result;
    scanf("%lld", &n);
    result = isPerfectSquare(n);
    printf("%d\n", result);
    return 0;
}
