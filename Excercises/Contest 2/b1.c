/*
------Problem------
Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.

------Input Format------
Số nguyên không âm n

------Constraints------
0≤n≤10^18

------Output Format------
Số lượng chữ số của n

------Sample Input 0------
123456789

------Sample Output 0------
9

*/
#include<stdio.h>
int main(){
    unsigned long long n;
    scanf("%llu",&n);
    int count=0;
    if(n==0){
        count++;
    }
    while(n!=0){
        n = n/10;
        count++;
        
    } 
    printf("%d",count);
    return 0;
}