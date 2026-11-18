
#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];
    int i, j;
    int count = 0;
    int peak;

    scanf("%d %d", &r, &c);

    if (r <= 0 || r > 100 || c <= 0 || c > 100)
    {
        return 0;
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            peak = 1;

            if (i > 0 && a[i][j] <= a[i-1][j])
                peak = 0;

            if (i < r-1 && a[i][j] <= a[i+1][j])
                peak = 0;

            if (j > 0 && a[i][j] <= a[i][j-1])
                peak = 0;

            if (j < c-1 && a[i][j] <= a[i][j+1])
                peak = 0;

            if (peak == 1)
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

