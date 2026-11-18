#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
    int rows, cols, matrix[MAX_SIZE][MAX_SIZE], i, j;
    long long sum;
    scanf("%d %d", &rows, &cols);
    if (rows <= 0 || rows > MAX_SIZE || cols <= 0 || cols > MAX_SIZE) return 1;
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++) scanf("%d", &matrix[i][j]);
    for (i = 0; i < rows; i++) {
        sum = 0;
        for (j = 0; j < cols; j++) sum += matrix[i][j];
        if (i > 0) printf(" ");
        printf("%lld", sum);
    }
    printf("\n");
    for (j = 0; j < cols; j++) {
        sum = 0;
        for (i = 0; i < rows; i++) sum += matrix[i][j];
        if (j > 0) printf(" ");
        printf("%lld", sum);
    }
    printf("\n");
    return 0;
}
