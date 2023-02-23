/*
------Problem------
Cho 4 số nguyên x, y, z, t. Như bạn đã biết, để tìm số lớn nhất và nhỏ nhất trong 2 số ta có thể sử dụng hàm max, 
min của thư viện math. Bài toán yêu cầu bạn tìm những số sau : Dòng 1 in ra số lớn hơn trong 2 số x, y. 
Dòng 2 in ra số nhỏ hơn trong 2 số z, t. Dòng 3 in ra số lớn nhất trong 3 số x, y, z. Dòng 4 in ra số nhỏ nhất 
trong 4 số x, y, z, t. 

------Input Format------
4 số x, y, z, t lần lượt trên 4 dòng.

------Constraints------
1<=x, y, z, t <= 1000;

------Output Format------
In ra 4 dòng theo yêu cầu.

------Sample Input 0------
586
617
778
37

------Sample Output 0------
617
37
778
37
*/
#include<stdio.h>
#include<math.h>
int main(){
    int x,y,z,t;
    scanf("%d%d%d%d", &x,&y,&z,&t);
    int b1 = fmax(x,y);
    printf("%d\n", b1);
    int b2 = fmin(z,t);
    printf("%d\n",b2);
    int b3 = fmax(b1,z);
    printf("%d\n",b3);
    int b4 = fmin(x,y);
    int b5 = fmin(b2,b4);
    printf("%d", b5);       
    return 0;
}