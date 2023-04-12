#include <stdio.h>

#define cot 100
#define hang 100

int max(int a[][cot], int row, int col){
    int max = a[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(max < a[i][j]){
                max = a[i][j];
            }
        }
    }
    return max;
}
int min(int a[][cot], int row, int col){
    int min = a[0][0];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(min > a[i][j]){
                min = a[i][j];
            }
        }
    }
    return min;
}

//Tính tổng của hàng số 2 và cột số 3
void sum(int a[][cot], int row, int col){
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == 2){
                sum1 += a[i][j];
            }
            if(j == 3){
                sum2 += a[i][j];
            }
        }
    }
    printf("tong hang 2 va cot 3: %d %d\n",sum1, sum2);
}

int main()
{
    int col, row;
    int a[hang][cot];
    scanf("%d%d", &row, &col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("%d\n",max(a, row, col));
    printf("%d",min(a, row, col));
    sum(a,row,col);

    return 0;
}