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
*
**
***
****
*****

*****
****
***
**
*

    *
   **
  ***
 ****
*****

*****
 ****
  ***
   **
    *

*
**
* *
*  *
*****

*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int cot=0;cot<n;cot++){
        for(int hang=0;hang<=cot;hang++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int cot=0;cot<n;cot++){
        for(int hang=0;hang<n-cot;hang++){
            printf("*");
        }
        printf("\n");
    }   
    for(int cot=0;cot<=n;cot++){
        for(int hang=0;hang<n;hang++){
            if(hang<n-cot){
                printf(" ");
            }else
                printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(int hang=n;hang>0;hang--){
        for(int cot=1;cot<=n;cot++){
            if(cot<=n-hang){
                printf(" ");
            }else
                printf("*");
        }
        printf("\n");
    }
    for(int hang=1;hang<=n;hang++){
        for(int cot=1;cot<=hang;cot++){
            if(hang==1||hang==n||cot==1||cot==n||hang==cot){
                printf("*");
            }else
                printf(" ");
        }
        printf("\n");
    }

   return 0;
}