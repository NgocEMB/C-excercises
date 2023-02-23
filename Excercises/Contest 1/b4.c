/*
------Problem------
Hàm ceil : làm tròn lên số nguyên gần nhất, floor : làm tròn xuống số nguyên gần nhất, 
round : làm tròn số nguyên phụ thuộc vào phần thập phân. 
Cho số thực X nhiệm vụ của bạn là sử dụng 3 hàm trên để tìm số nguyên nhỏ hơn gần X nhất, 
số nguyên lớn hơn gần X nhất, số nguyên gần X nhất. Nên nhớ hàm ceil, floor, round trả về số double, 
các bạn in ra kết luôn hàm ceil, round, floor đối với số nhỏ thì không vấn đề gì 
nhưng với số lớn nó có thể xuất hiện số 0 ở sau. Ví dụ cout << ceil(1000000) << endl; 
kết quả in ra sẽ là 1000000.0

------Input Format------
Dòng duy nhất chứa số thực X

------Constraints------
1<=X<=10^6;

------Output Format------
In ra 3 số trên 3 dòng

------Sample Input 0------
3.59

------Sample Output 0------
3
4
4

------Sample Input 1------
5.58

------Sample Output 1------
5
6
6
*/
#include<stdio.h>
#include<math.h>
int main(){
    double x;
    scanf("%lf",&x);
    printf("%d\n", (int)ceil(x));
    printf("%d\n",(int)floor(x));
    printf("%d",(int)round(x));
    return 0;   
}