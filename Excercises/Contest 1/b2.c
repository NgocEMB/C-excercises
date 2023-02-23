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
int x,y;
int main(){
    printf("Nhap co so x va so mu y: ");
    scanf("%d%d", &x, &y);
    double mu = pow(x,y);
    printf("Ket qua la: %lf", mu);
    return 0;
}