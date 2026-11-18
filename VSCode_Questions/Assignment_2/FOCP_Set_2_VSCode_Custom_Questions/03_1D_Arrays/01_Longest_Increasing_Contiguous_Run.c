#include <stdio.h>
#define MAX_SIZE 1000
int main(void) {
    int n, values[MAX_SIZE], i, currentLength = 1, bestLength = 1;
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) return 1;
    for (i = 0; i < n; i++) scanf("%d", &values[i]);
    for (i = 1; i < n; i++) {
        if (values[i] > values[i - 1]) currentLength++;
        else currentLength = 1;
        if (currentLength > bestLength) bestLength = currentLength;
    }
    printf("%d\n", bestLength);
    return 0;
}
