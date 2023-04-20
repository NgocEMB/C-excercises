#include <stdio.h>

int a[100][100];

int main()
{
    freopen("D:/DAY C/SWJOB/input.txt", "r", stdin);
    freopen("D:/DAY C/SWJOB/output.txt", "w", stdout);

    int n, m;
    long long res[100][100] = {0};

    scanf("%d %d", &n, &m);


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    res[0][0] = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i == 0 && j == 0) continue;
            if(i == 0) {
                res[i][j] = a[i][j] + res[i][j-1];
            } else if(j == 0) {
                res[i][j] = a[i][j] + res[i-1][j];
            } else {
                if(res[i][j-1] > res[i-1][j]) {
                    res[i][j] = a[i][j] + res[i][j-1];
                } else {
                    res[i][j] = a[i][j] + res[i-1][j];
                }
            }
        }
    }
    printf("%lld", res[n-1][m-1]);

    return 0;
}