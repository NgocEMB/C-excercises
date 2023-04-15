#include <stdio.h>
#include<math.h>

#define hang 200
#define cot 200

int a[hang][cot];
int mark[400] = {0};

int testPrime(int a)
{
    if (a < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    freopen("D:/DAY C/SWJOB/input.txt", "r", stdin);
    freopen("D:/DAY C/SWJOB/output.txt", "w", stdout);

    int n, index = 0;
    scanf("%d", &n);
    int count = 0;
    for (int i = 0; i < n; i++)
    { // nhap hang
        for (int j = 0; j < n; j++)
        { // nhap cot
            scanf("%d", &a[i][j]);
        }
        if(testPrime(a[i][i])) {
            mark[index++] = a[i][i]; 
        }
        if(testPrime(a[i][n - i - 1])) {
            mark[index++] = a[i][n - i - 1]; 
        }
    }

    for (int i = 0; i < 399; i++)
    {
        for(int j = i + 1; j < 400; j++) {
            if(mark[i] == mark[j]) {
                mark[j] = 0;
            }
        }
        if(mark[i] != 0)
            count++;
    }

    printf("%d", count);

    return 0;
}