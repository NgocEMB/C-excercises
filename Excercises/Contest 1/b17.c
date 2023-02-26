/*
------Problem------
Cho 4 số nguyên a, b, c, d. Hãy tìm số lớn nhất và nhỏ nhất trong 4 số này.

------Input Format------
4 số a, b, c, d viết trên 1 dòng và cách nhau một dấu cách.

------Constraints------
1<=a,b,c,d<=10^18

------Output Format------
In ra số lớn nhất và nhỏ nhất.

------Sample Input 0------
546 272 839 508

------Sample Output 0------
839 272

*/
#include<stdio.h>
int main(){
    long long a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    long long max = a;
    long long min = a;
    if(b>max){
        max = b;
    }
    if(b<min){
        min = b;
    }
    if(c>max){
        max = c;
    }
    if(c<min){
        min = c;
    }
    if(d>max){
        max = d;
    }
    if(d<min){
        min = d;
    }
    printf("%lld\n",max);
    printf("%lld",min);
    return 0;
}