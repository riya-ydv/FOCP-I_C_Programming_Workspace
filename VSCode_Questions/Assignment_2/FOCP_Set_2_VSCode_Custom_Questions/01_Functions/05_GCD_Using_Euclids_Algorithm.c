#include <stdio.h>
long long gcd(long long a, long long b) {
    long long remainder;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
int main(void) {
    long long a, b, result;
    scanf("%lld %lld", &a, &b);
    result = gcd(a, b);
    printf("%lld\n", result);
    return 0;
}
