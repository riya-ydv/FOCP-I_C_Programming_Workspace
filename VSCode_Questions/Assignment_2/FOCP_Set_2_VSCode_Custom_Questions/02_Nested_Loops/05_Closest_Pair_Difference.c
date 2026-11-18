#include <stdio.h>
#define MAX_SIZE 1000
int main(void) {
    int n, values[MAX_SIZE], i, j;
    long long difference, minimumDifference;
    scanf("%d", &n);
    if (n < 2 || n > MAX_SIZE) return 1;
    for (i = 0; i < n; i++) scanf("%d", &values[i]);
    minimumDifference = (long long)values[0] - values[1];
    if (minimumDifference < 0) minimumDifference = -minimumDifference;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            difference = (long long)values[i] - values[j];
            if (difference < 0) difference = -difference;
            if (difference < minimumDifference) minimumDifference = difference;
        }
    }
    printf("%lld\n", minimumDifference);
    return 0;
}
