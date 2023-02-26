/*
------Problem------
Cho một số nguyên không âm N.Bạn hãy thực hiện viết câu lệnh để kiểm tra các điều kiện sau :
1. N có phải là số chẵn?
2. N có phải là số vừa chia hết cho 3 vừa chia hết cho 5?
3. N có phải là số chia hết 3 nhưng không chia hết cho 7?
4. N có phải là số chia hết cho 3 hoặc 7?
5. N là số lớn hơn 30 và nhỏ hơn 50?
6. N có phải là số không nhỏ hơn 30 và chia hết cho ít nhất một trong 3 số 2, 3, 5?
7. N có phải là số có 2 chữ số có chữ tận cùng là một số nguyên tố?
8. N có phải là số không vượt quá 100 và chia hết cho 23?
9. N không thuộc đoạn [10, 20]?
10. N có chữ số tận cùng là bội số của 3?

------Input Format------
Số nguyên dương N

------Constraints------
1<=N<=10^6

------Output Format------
In ra 10 dòng, mỗi dòng là "YES" hoặc "NO" tương ứng với 10 điều kiện. 
Nếu N thỏa mãn điều kiện thứ i thì dòng i in ra YES, ngược lại in ra NO.

------Sample Input 0------
263

------Sample Output 0------
NO
NO
NO
NO
NO
NO
NO
NO
YES
YES
*/
#include<stdio.h>
int main(){
    unsigned int n;
    scanf("%u",&n);
    if(n%2==0)              /*1*/
        printf("YES\n");
    else
        printf("NO\n");
    if(n%3==0&&n%5==0)      /*2*/
        printf("YES\n");
    else
        printf("NO\n");
    if(n%3==0&&n%7!=0)      /*3*/
        printf("YES\n");
    else    
        printf("NO\n");
    if(n%3==0 || n%7==0)    /*4*/
        printf("YES\n");
    else
        printf("NO\n");
    if(n>30&&n<50)             /*5*/
        printf("YES\n");
    else
        printf("NO\n");
    if(n>30 && (n%2==0||n%3==0||n%5==0)) /*6*/
        printf("YES\n");
    else
        printf("NO\n");
    if((n>=10 && n<=99)&&(n%10==2||n%10==3||n%10==5||n%10==7))
        printf("YES\n");
    else
        printf("NO\n");
    if(n<100 && n%23==0)
        printf("YES\n");
    else    
        printf("NO\n");
    if(n<10||n>20)
        printf("YES\n");
    else
        printf("NO\n");
    if(n%10==0 || n%10 ==3 || n%10 == 6 || n%10 ==9)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}