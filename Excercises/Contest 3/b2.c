/*
------Problem------
Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, 
nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".

------Input Format------
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;

------Constraints------
1<=N<=1000; -10^3<=A[i]<=10^3;
 
------Output Format------
In ra các số cách nhau một khoảng trắng hoặc in ra NONE nếu không tìm thấy số thỏa mãn điều kiện của đầu bài.

------Sample Input 0------
5
-971 107 458 222 200 

------Sample Output 0------
458 200 

------Explanation 0------
Số 458 là số chẵn và ở chỉ số 2, số 200 là số chẵn ở ở chỉ số 4

*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int a[1000];
    char check = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0 && i % 2 == 0) {
            printf("%d ", a[i]);
            check = 1;
        }
    }
    if(check != 1)  printf("NONE");
    return 0;
}