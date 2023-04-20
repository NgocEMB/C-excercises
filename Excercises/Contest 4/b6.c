#include <stdio.h>

int hsi[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int hsj[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int n, m;

int check_max(int i_main, int j_main, int a[][100])
{
    int row = i_main;
    int col = j_main;

    for (int i = 0; i < 8; i++)
    {
        row += hsi[i];
        col += hsj[i];

        if ((row >= 0 && row < n) && (col >= 0 && col < m))
        {
            if (a[row][col] >= a[i_main][j_main])
            {
                return 0;
            }
        }

        row = i_main;
        col = j_main;
    }
    return 1;
}

int main()
{
    int a[100][100];
    int count = 0;

    freopen("D:/DAY C/SWJOB/input.txt", "r", stdin);
    freopen("D:/DAY C/SWJOB/output.txt", "w", stdout);

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (check_max(i, j, a))
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}