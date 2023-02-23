/*
------Problem------
28tech đi mua vở, anh ta có N đồng, mỗi quyển vở có giá X đồng. Hỏi anh ta mua được tối đa bao nhiêu quyển vở ? 
Ví dụ anh ta có 15 đồng và mỗi quyển vở có giá 6 đồng thì anh ta mua được 2 quyển, vậy trong lập trình bạn tính 
như thế nào ?

------Input Format------
1 dòng duy nhất chứa 2 số nguyên N và X

------Constraints------
1<=X<=1000; 0<=N<=10^12;

------Output Format------
In ra số lượng số sách mua được kèm theo 1 số lời dẫn và dấu chấm than. Xem output để rõ hơn yêu cầu.

------Sample Input 0------
142 43

------Sample Output 0------
SO VO MUA DUOC LA : 3 !!!!!

------Sample Input 1------
487 12

------Sample Output 1------
SO VO MUA DUOC LA : 40 !!!!!
*/
#include<stdio.h>
int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    int a = n/x;
    printf("So vo mua duoc la: %d!!!!!",a);
    return 0;
}