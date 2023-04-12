//Code here
/*
Bài 2. Tổng hàng, tổng cột trên ma trận
Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tính tổng các phần tử trên từng hàng và tổng các phần tử trên từng cột của ma trận.

Input Format

Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

Constraints

1≤n,m≤200; Các phần tử trong ma trận là số dương không quá 10^9.

Output Format

Dòng đầu tiên, in ra N số là tổng của N hàng. Dòng thứ 2 in ra M số là tổng của M cột.

Sample Input 0

3 3
1 2 3
4 5 6
7 8 9
Sample Output 0

6 15 24 
12 15 18
*/
#include<stdio.h>
#include<math.h>

#define cot 200
#define hang 200

int a[hang][cot];

int main(){
    int n, m;
    long long sum = 0;
    
    scanf("%d %d",&n,&m);
    for(int i = 0;i < n;i++){
        for(int j = 0;j < m;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = 0; j < m; j++){
            sum += a[i][j];
        }
        printf("%lld ", sum);
    }

    printf("\n");
    for(int i = 0; i < m; i++){
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += a[j][i];
        }
        printf("%lld ", sum);
    }
    return 0;
}
