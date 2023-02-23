/*
------Problem------
Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của năm nhuận có 29 ngày.

------Input Format------
2 số nguyên t và n tương ứng với tháng và năm.

------Constraints------
0<=t<=100; 0<=n<=5000;

------Output Format------
Nếu tháng là hợp lệ(tháng 1 tới 12) và năm là hợp lệ (lớn hơn 0) thì in ra số ngày tương ứng của năm đó, 
ngược lại in ra "INVALID".

------Sample Input 0------
11 2021

------Sample Output 0------
30

*/
#include<stdio.h>
int main(){
    int t, n;
    scanf("%d%d",&t,&n);
    if(1<=t&&t<=12 && n>0){
        switch (t)
        {
        case 1:
            printf("31");
            break;
        case 2:
            if((n%4==0 && n%100!=0) || (n%400==0)){
                printf("29");
            }else
                printf("28");
            break;
        case 3:
            printf("31");
            break;
        case 4:
            printf("30");
            break;
        case 5:
            printf("31");
            break;
        case 6:
            printf("30");
            break;
        case 7:
            printf("31");
            break;
        case 8:
            printf("31");
            break;
        case 9:
            printf("30");
            break;
        case 10:
            printf("31");
            break;
        case 11:
            printf("30");
            break;
        case 12:
            printf("31");
            break;                               
        }
    }else
        printf("INVALID");
    return 0;
}