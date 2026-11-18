#include <stdio.h>
#define MAX_SIZE 1000
int main(void) {
    int n, values[MAX_SIZE], i, j, count = 0;
    long long target;
    scanf("%d %lld", &n, &target);
    if (n < 0 || n > MAX_SIZE) return 1;
    for (i = 0; i < n; i++) scanf("%d", &values[i]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if ((long long)values[i] + values[j] == target) count++;
    printf("%d\n", count);
    return 0;
}
