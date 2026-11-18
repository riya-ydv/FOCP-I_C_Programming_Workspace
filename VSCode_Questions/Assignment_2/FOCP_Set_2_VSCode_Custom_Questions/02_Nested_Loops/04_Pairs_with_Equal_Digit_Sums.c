#include <stdio.h>
#define MAX_SIZE 1000
int digitSum(int number) {
    int sum = 0;
    while (number > 0) { sum += number % 10; number /= 10; }
    return sum;
}
int main(void) {
    int n, values[MAX_SIZE], i, j, count = 0;
    scanf("%d", &n);
    if (n < 0 || n > MAX_SIZE) return 1;
    for (i = 0; i < n; i++) scanf("%d", &values[i]);
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (digitSum(values[i]) == digitSum(values[j])) count++;
    printf("%d\n", count);
    return 0;
}
