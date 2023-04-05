/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

------Input Format------
Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

------Constraints------
1<=N<=10^6; 0<=A[i]<=10^18
 
------Output Format------
In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. Nếu trong mảng không tồn tại số 
Fibonacci nào thì in ra "NONE".

------Sample Input 0------
6
1597 25358 7318 5878 0 2634 

------Sample Output 0------
1597 0 

*/
#include <stdio.h>
#include <math.h>

long long fb[93];
long long a[1000000]; //DATA

//O(90)
void fibo()
{
    fb[0] = 0;
    fb[1] = 1;
    for (int i = 2; i <= 92; i++)   //92: 7540113804746346429
    {
        fb[i] = fb[i-1] + fb[i-2];
    }
}

//O(93)
int check_fibo(long long n)
{
    for (int i = 0; i <= 92; i++)
    {
        if(n == fb[i]) return 1;
    }
    return 0;
}

int main()
{
    int n;
    
    scanf("%d", &n);
    fibo();
    //O(n)
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        if(check_fibo(a[i]))
        {
            printf("%lld ", a[i]);
        }
    }

    return 0;
}