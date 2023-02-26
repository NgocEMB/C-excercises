/*
------Problem------
Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, 
tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".

------Input Format------
1 dòng chứa 3 số a, b, c.

------Constraints------
0<=a,b,c<=10^3

------Output Format------
In ra kết quả tương ứng.

------Sample Input 0------
8 8 8 

------Sample Output 0------
1

------Sample Input 1------
8 8 6

------Sample Output 1------
2
*/
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);   
    if(a==b&&b==c)
        printf("1");
    else if(a==b||b==c||c==a)
        printf("2");
    else if((a*a==b*b+c*c)||(b*b==a*a+c*c)||(c*c==a*a+b*b))
        printf("3"); 
    else
        printf("4");
    return 0;
}