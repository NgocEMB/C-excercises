/*
------Problem------
Cho 4 số X, Y, Z, T là số nguyên được nhập từ bàn phím. 
Bạn hãy in ra 3 dòng, dòng 1 lần lượt 4 số Y,Z,X,T mỗi số cách nhau một dấu phẩy, 
dòng 2 in ra tổng 4 số, dòng 3 in ra giá trị của biểu thử X - Y + Z * T. 
(Chú ý giá trị của tích Z * T và giá trị của tổng 4 số có thể tràn kiểu dữ liệu int)

------Input Format------
1 dòng chứa 4 số X, Y, Z, T

------Constraints------
1<=X, Y, Z, T <= 10^9

------Output Format------
In ra theo yêu cầu đầu bài

------Sample Input 0------
93 9 93 98

------Sample Output 0------
9,93,93,98
293
9198
*/
#include<stdio.h>
int x,y,z,t;
int main(){
    printf("nhap lan luot x,y,z,t: ");
    scanf("%d%d%d%d", &x, &y, &z, &t);
    printf("%d, %d, %d, %d\n", x,y,z,t);
    long long sum = x+y+z+t;
    printf("Tong 4 chu so = %lld\n",sum);
    long long bt = x-y+(z*t);
    printf("bieu thuc co gia tri = %lld",bt);
    return 0;
}