/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1 
số trái dấu với nó đứng cạnh nó.

------Input Format------
Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

------Constraints------
2<=N<=10^6; -10^6<=A[i]<=10^6

------Output Format------
In ra kết quả của bài toán

------Sample Input 0------
9
1000000 -993205 998602 990785 -993397 990527 995429 991288 -992221 
1       1       0       1       1      1       0       1       1    --> check
------Sample Output 0------
-992414 993205 990785 -993397 990527 991288 -992221 

*/
#include <stdio.h>
#include <math.h>

int a[1000000]; //DATA

int main()
{
    int n;
    int temp = 1000000;
    scanf("%d", &n);

    //O(n)  - O(2n)
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(i >= 1)
        {
            if((a[i-1] >= 0 && a[i] < 0) || (a[i-1] < 0 && a[i] >= 0))
            {
                if(a[i-1] != temp)
                    printf("%d ", a[i-1]); //ko in
                printf("%d ", a[i]);
                temp = a[i];
            }
        }
    }


    return 0;
}