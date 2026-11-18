
#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];
    int i, j, k;
    int minRow, maxCol;
    int found = 0;

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
            minRow = 1;
            maxCol = 1;

            for (k = 0; k < c; k++)
            {
                if (a[i][j] > a[i][k])
                {
                    minRow = 0;
                    break;
                }
            }

            if (minRow == 0)
            {
                continue;
            }

            for (k = 0; k < r; k++)
            {
                if (a[i][j] < a[k][j])
                {
                    maxCol = 0;
                    break;
                }
            }

            if (maxCol == 1)
            {
                printf("%d %d %d\n", i, j, a[i][j]);
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            break;
        }
    }

    if (found == 0)
    {
        printf("None\n");
    }

    return 0;
}

