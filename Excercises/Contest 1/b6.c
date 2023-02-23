/*
------Problem------
Cho số nguyên N hãy in ra kết quả của những phép toán sau : Dòng 1. In ra 2 lần số N, Dòng 2. In ra 10 lần số N, 
Dòng 3. In ra kết quả của phép chia nguyên của N với 2, Dòng 4. In ra kết quả của phép chia lấy phần thập phân của 
N với 2, in ra 3 chữ số phần thập phân.

------Input Format------
Dòng duy nhất chứa số nguyên dương N

------Constraints------
1<=N<=10^9

------Output Format------
In ra 4 dòng theo yêu cầu, mỗi kết quả cách nhau thêm 1 dòng trống, xem output để rõ hơn yêu cầu.

------Sample Input 0------
570

------Sample Output 0------
1140

5700

285

285.000
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int b1 = n*2;
    printf("%d\n",b1);
    int b2 = n*10;
    printf("%d\n",b2);
    int b3 = n/2;
    printf("%d\n",b3);
    float b4 = n/2;
    printf("%.3f",b4);
    return 0;
}