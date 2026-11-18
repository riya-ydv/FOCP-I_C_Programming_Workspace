#include <stdio.h>
#define MAX_SIZE 100
int main(void) {
    int n, matrix[MAX_SIZE][MAX_SIZE], i, j, isSymmetric = 1;
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) return 1;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) scanf("%d", &matrix[i][j]);
    for (i = 0; i < n && isSymmetric; i++)
        for (j = i + 1; j < n; j++)
            if (matrix[i][j] != matrix[j][i]) { isSymmetric = 0; break; }
    printf("%s\n", isSymmetric ? "YES" : "NO");
    return 0;
}
