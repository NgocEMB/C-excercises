/*
------Problem------
Cho số nguyên dương N, in ra hình thoi tương ứng

------Input Format------
Dòng duy nhất chứa số nguyên dương N

------Constraints------
1<=N<=20

------Output Format------
In ra hình tương ứng

------Sample Input 0------
5

------Sample Output 0------
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 

*/
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int hang=1;hang<=n;hang++){
    for(int cot=1;cot<=n;cot++){
      if(cot<=n-hang){
        printf("  ");
      }else
        printf("* ");
    }
    for(int cot=1;cot<=hang-1;cot++){
      printf("* ");
    }
    printf("\n");
  }
  for(int hang=n-1;hang>=1;hang--){
    for(int cot=1;cot<=n;cot++){
      if(cot<=n-hang){
        printf("  ");
      }else
        printf("* ");
    }
    for(int cot=1;cot<=hang-1;cot++){
      printf("* ");
    }
    printf("\n"); 
  }
  return 0;
}