#include <stdio.h>
long long rectangleArea(long long length, long long width) {
    return length * width;
}
int main(void) {
    long long length, width, area;
    scanf("%lld %lld", &length, &width);
    area = rectangleArea(length, width);
    printf("%lld\n", area);
    return 0;
}
