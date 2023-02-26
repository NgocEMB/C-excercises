/*
------Problem------
Cho 2 số x, y. Nhiệm vụ của bạn là tính x ^ y

------Input Format------
1 dòng chứa 2 số nguyên dương x, y viết cách nhau một dấu cách

------Constraints------
1<=x,y<=12;

------Output Format------
In ra x^y, nếu x^y có phần thập phân thì in ra 2 số sau dấu phẩy, nếu không có phần thập phân thì không cần in.

------Sample Input 0------
2 2

------Sample Output 0------
4

------Sample Input 1------
4 1

------Sample Output 1------
4
*/
#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    scanf("%lf%lf", &x, &y);
    double muthuc = pow(x,y);
    long long munguyen = pow(x,y);
    if(munguyen-muthuc==0){
        printf("%d\n",munguyen);
    }else
        printf("Ket qua la: %.2lf", muthuc);
    return 0;
}