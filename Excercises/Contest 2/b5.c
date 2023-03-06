/*
------Problem------
Nhập N và in ra hình vẽ tương ứng

------Input Format------
Dòng duy nhất chứa số nguyên dương N

------Constraints------
1<=N<=20

------Output Format------
In ra hình tương ứng

------Sample Input 0------
6

------Sample Output 0------
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int cot=1;cot<=n;cot++){
        for(int hang=1;hang<=cot;hang++){
            printf("%c ", cot+64);
        }
        printf("\n");
    }
    return 0;
}