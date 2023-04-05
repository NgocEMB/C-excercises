/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính trung bình cộng của các số là số nguyên tố 
trong dãy. Dữ liệu đảm bảo có ít nhất 1 phần tử là số nguyên tố trong dãy.

------Input Format------
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

------Constraints------
1<=N<=1000; -10^3<=A[i]<=10^3;
 
------Output Format------
In ra đáp án của bài toán lấy 3 số sau dấu phẩy.

------Sample Input 0------
5
-911 234 151 347 231 

------Sample Output 0------
249.000

------Sample Input 1------
3 
1 2 5

------Sample Output 1------
3.500
*/

#include <stdio.h>
#include <math.h>

int nto(int x) {
    if(x < 2) return 0;
    else {
        for(int i = 2; i <= sqrt(x); i++){
            if(x % i == 0) return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    int a[1001];
    int sum = 0;
    int count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(nto(a[i])) {
            sum += a[i];
            ++count;
        }
    }
    printf("%.3f", (double)sum/count);
    
    return 0;
}