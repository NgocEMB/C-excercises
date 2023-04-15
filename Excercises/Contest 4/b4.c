#include <stdio.h>

#define COLUMN 9
#define ROW 9

long long a[COLUMN][ROW];
long long fibo[81];

void fibonaccci(int n) {
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}

int main()
{
    freopen("D:/DAY C/SWJOB/input.txt", "r", stdin);
    freopen("D:/DAY C/SWJOB/output.txt", "w", stdout);
    int n;
    scanf("%d",&n);

    fibonaccci(n*n);

    int count_fibo = 0;
    int r_col = n - 1;
    int a_row = 0;
    int b_row = n - 1;
    int l_col = 0;
    
    for (int i = 0; i < n/2; i++)
    {
        //hàng trên
        for (int col = l_col; col <= r_col; col++)
        {
            a[a_row][col] = fibo[count_fibo++];
        }
        //cột phải
        for (int row = a_row + 1; row <= b_row - 1; row++)
        {
            a[row][r_col] = fibo[count_fibo++];
        }
        //hàng dưới
        for (int col = r_col; col >= l_col; col--)
        {
            a[b_row][col] = fibo[count_fibo++];
        }
        //cột trái
        for (int row = b_row - 1; row >= a_row + 1; row--)
        {
            a[row][l_col] = fibo[count_fibo++];
        }
        a_row++;
        b_row--;
        r_col--;
        l_col++;
    }

    if (n % 2 == 1) {
        a[n/2][n/2] = fibo[count_fibo++];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%lld ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}