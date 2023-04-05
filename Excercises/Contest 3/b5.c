/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau:
1. Số lượng số nguyên tố trong dãy
2. Số lượng số thuận nghịch trong dãy: 123321
3. Số lượng số chính phương trong dãy: 
4. Số lượng số có tổng chữ số của nó là số nguyên tố.

------Input Format------
Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

------Constraints------
1<=N<=100; 0<=A[i]<=10000;
 
------Output Format------
In ra 4 dòng số lượng số tương ứng với 4 yêu cầu trên

------Sample Input 0------
6
4 1682 5972 6331 9872 3956

------Sample Output 0------
0
1
1
4

*/
#include <stdio.h>
#include <math.h>

int a[100]; //DATA

int check_nto(int n)
{
    if(n == 1) return 0;
    if(n == 0) return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

int tong_csnt(int n)
{
    int sum = 0;
    
    while(n != 0)
    {
        sum += n%10;
        n /= 10;
    }
    if(check_nto(sum)) return 1;
    return 0;
}

int check_tn(int n) 
{
    int temp = n;
    int sum_nguoc = 0;
    while(n != 0)
    {
        sum_nguoc = sum_nguoc * 10 + (n % 10);
        n /= 10;
    }
    if(sum_nguoc == temp)    return 1;
    return 0;
}

//4 9 16 => x^2 = a; sqrt(5)
int check_cp(int n)
{
    double res1 = sqrt(n);
    int res2 = sqrt(n);
    if(res1 == res2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    int count[4] = {0}; //0 0 0 0 
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(check_nto(a[i]))
        {
            
            count[0]++;
        }
        if(check_tn(a[i]))
        {
            count[1]++;
        }
        if(check_cp(a[i]))
        {
            count[2]++;
        }
        if(tong_csnt(a[i]))
        {
            count[3]++;
        }
    }
    printf("%d\n", count[0]);
    printf("%d\n", count[1]);
    printf("%d\n", count[2]);
    printf("%d\n", count[3]);

    return 0;
}