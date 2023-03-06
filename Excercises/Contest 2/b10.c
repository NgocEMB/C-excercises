/*
------Problem------
Cho N là số nguyên dương, in ra hình tương ứng.

------Input Format------
Dòng duy nhất chứa số nguyên dương N

------Constraints------
5<=N<=25

------Output Format------
In ra hình tương ứng

------Sample Input 0------
6

------Sample Output 0------
ABCDEF
bcdefg
CDEFGH
defghi
EFGHIJ
fghijk

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    char ten = 'A';
    for(int hang=1;hang<=n;hang++){
        if(hang%2==0){
            ten = 'a'+ hang-1;
        }else{
            ten = 'A' + hang-1;
        }
        for(int cot=1;cot<=n;cot++){
                printf("%c",ten);
                ten++;
        }
        printf("\n");
    }
    return 0;
}