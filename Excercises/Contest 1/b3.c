/*
------Problem------
Cho số nguyên dương N, nhiệm vụ của bạn là tính căn bậc 2 và căn bậc 3 của N.

------Input Format------
Dòng duy nhất chứa số nguyên dương N

------Constraints------
1<=N<=10^9;

------Output Format------
Dòng 1 in ra căn bậc 2 của n với 2 số sau dấu phẩy; Dòng 2 in ra căn bậc 3 của n với 3 số sau dấu phẩy;

------Sample Input 0------
65

------Sample Output 0------
8.06
4.021

------Sample Input 1------
15

------Sample Output 1------
3.87
2.466
*/
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    double c2 = sqrt(n);
    printf("%.2lf\n",c2);
    float c3 = pow(n,(1.0)/3);
    printf("%.3f",c3);
    return 0;
}