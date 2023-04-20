#include <stdio.h>

int count = 0;
int hs_hang[4] = {-1, 0, 1, 0};
int hs_cot[4] = {0, 1, 0, -1};
int a[50][50];
int n, m;

void mien(int hang, int cot) {
    int index_row = hang;
    int index_col = cot;
    
    //gán lại giá trị đang xét = 0, để tránh lặp vv
    a[hang][cot] = 0;

    for(int i = 0; i < 4; i++) {
        index_row += hs_hang[i];
        index_col += hs_cot[i];
        printf("%d %d\n", index_row, index_col);
        if(a[index_row][index_col] == 1 && (index_col >= 0 && index_col < m) && (index_row >= 0 && index_row < n)) {
            mien(index_row, index_col);
        }
        index_row = hang;
        index_col = cot;
    }
}

int main()
{
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
            if(a[i][j] == 1) {
                count++;
                mien(i, j);
            }
        }
    }
    printf("%d", count);
    
    return 0;
}