#include <stdio.h>
int maxOfThree(int a, int b, int c) {
    int maximum = a;
    if (b > maximum) maximum = b;
    if (c > maximum) maximum = c;
    return maximum;
}
int main(void) {
    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);
    result = maxOfThree(a, b, c);
    printf("%d\n", result);
    return 0;
}
