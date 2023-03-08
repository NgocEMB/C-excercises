/*
------Problem------
Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

------Input Format------
Số nguyên dương N

------Constraints------
1≤n≤100

------Output Format------
In ra hình sao theo mẫu

------Sample Input 0------
5

------Sample Output 0------
*****
*****
*****
*****
*****

*****
*   *
*   *
*   *
*****

*****
*###*
*###*
*###*
*****

1 1 1 1 1 
2       2 
3       3 
4       4 
5 5 5 5 5 

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int cot=0;cot<n;cot++){
        for(int hang=0;hang<n;hang++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int cot=0;cot<n;cot++){
        for(int hang=0;hang<n;hang++){
            if(cot>0&&cot<n-1){
                if(hang>0&&hang<n-1){
                    printf(" ");
                }else{
                    printf("*");
                }
            }else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
        for(int cot=0;cot<n;cot++){
        for(int hang=0;hang<n;hang++){
            if(cot>0&&cot<n-1){
                if(hang>0&&hang<n-1){
                    printf("#");
                }else{
                    printf("*");
                }
            }else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int cot=0;cot<n;cot++){
        for(int hang=0;hang<n;hang++){
            if(cot>0&&cot<n-1){
                if(hang>0&&hang<n-1){
                    printf(" ");
                }else{
                    printf("%d ",cot+1);
                }
            }else
                printf("%d ",cot+1);
        }
        printf("\n");
    }
    return 0;
}