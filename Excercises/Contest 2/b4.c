/*
------Problem------
Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

------Input Format------
Số nguyên dương N

------Constraints------
1≤n≤100

------Output Format------
In ra hình số theo mẫu

------Sample Input 0------
5

------Sample Output 0------
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 

~~~~1
~~~22
~~333
~4444
55555

1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15

*/
#include<stdio.h>
int main(){
    int n;
    int tang=0;
    scanf("%d",&n);
    for(int cot=0; cot<n;cot++){
        for(int hang=0; hang<n;hang++){
            tang+=1;
            printf("%d ",tang);
        }
        printf("\n");
    }
    printf("\n");
    for (int cot=1; cot<=n; cot++) {
        for (int hang=cot;hang<=cot+n-1; hang++) {
            printf("%d ", hang);
        }
        printf("\n");
    }
    printf("\n");
    for (int cot=1; cot<=n; cot++) {
        for (int hang=1; hang<=n-cot; hang++) {
            printf("~");
        }
        for (int giatri=1; giatri<=cot; giatri++) {
            printf("%d", cot);
        }
        printf("\n");
    } 
    printf("\n");
    for(int hang=1;hang<=n;hang++){
        int temp = hang;
        int giamdan = n;
        for(int cot=1;cot<=hang;cot++){
            printf("%d ",temp);
            temp = temp + (giamdan - cot);
            
        }
        printf("\n");
    }   
    return 0;
}