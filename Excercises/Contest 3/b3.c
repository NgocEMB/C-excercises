/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các chỉ số i trong mảng thỏa mãn :
Tổng các phần tử bên trái i và tổng các phần tử bên phải i là các số nguyên tố

------Input Format------
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

------Constraints------
1<=N<=1000; 0<=A[i], X<=10^3;

------Output Format------
In ra các chỉ số thỏa mãn trên một dòng, các số cách nhau một khoảng trắng

------Sample Input 0------
5
53 5 69 47 19

------Sample Output 0------
3

*/
#include <stdio.h>
#include <math.h>

int nto(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    int a[1000];
    int tong_l = 0;
    int tong_p = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    // duyet mang

    for (int i = 1; i < n; i++)
    {
        tong_p += a[i];
    }

    for (int i = 1; i < (n - 1); i++)
    {
        tong_l += a[i - 1];
        tong_p = tong_p - a[i];
        if (nto(tong_l) && nto(tong_p))
        {
            printf("%d ", i);
        }
    }

    return 0;
}