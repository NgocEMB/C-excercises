/*
------Problem------
Cho số nguyên dương N là số lẻ, in ra hình số tương ứng

------Input Format------
Dòng duy nhất chứa số nguyên dương N

------Constraints------
5<=N<=40

------Output Format------
In ra hình tương ứng

------Sample Input 0------
5

------Sample Output 0------
1       1 
  2   2   
    3     
  4   4   
5       5

------Sample Input 1------
9

------Sample Output 1------
1               1 
  2           2   
    3       3     
      4   4       
        5         
      6   6       
    7       7     
  8           8   
9               9 

*/
#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int hang=1;hang<=n;hang++){
    for(int cot=1;cot<=n;cot++){
      if(hang==cot){
        printf("%d ",hang);
      }else if(hang+cot==n+1){
        printf("%d ",hang);
      }
      else
        printf("  ");  
    }
    printf("\n");
  }
  return 0;
}