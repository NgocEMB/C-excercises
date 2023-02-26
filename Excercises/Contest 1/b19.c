/*
------Problem------
Bizon the Champion được gọi là Champion vì một lý do. Bizon the Champion gần đây đã có một món quà - một tủ 
kính mới với n kệ và anh quyết định đặt tất cả những món quà của mình ở đó. Tất cả các món quà có thể được 
chia thành hai loại: huy chương và cúp. Bizon the Champion có a1 cúp giải nhất, a2 cúp giải nhì và a3 cúp 
giải ba. Bên cạnh đó, anh có b1 huy chương giải nhất, b2 huy chương giải nhì và b3 huy chương giải ba. 
Đương nhiên, phần thưởng trong tủ phải sắp xếp cho thật đẹp, đó là lý do Bizon the Champion quyết định tuân 
theo các quy tắc: bất kỳ kệ nào cũng không thể chứa cả cúp và huy chương cùng một lúc; không có kệ có thể 
chứa nhiều hơn năm cúp; không có kệ có thể có hơn mười huy chương. Giúp Bizon the Champion tìm hiểu xem chúng 
tôi có thể đặt tất cả các phần thưởng để tất cả các điều kiện được đáp ứng hay không.

------Input Format------
Dòng đầu tiên chứa các số nguyên a1, a2 và a3. Dòng thứ hai chứa các số nguyên b1, b2 và b3 (0 ≤ b1, b2, b3<= 100).
Dòng thứ ba chứa số nguyên n. Các số trong các dòng được phân tách bằng khoảng trắng đơn.

------Constraints------
0 ≤ a1, a2, a3<= 100; 1 <=n <=100;

------Output Format------
In "YES" (không có dấu ngoặc kép) nếu tất cả các phần thưởng có thể được đưa lên kệ theo cách được mô tả. 
Nếu không, hãy in "NO" (không có dấu ngoặc kép).

------Sample Input 0------
46 76 52 40 60 67 
11 

------Sample Output 0------
NO

*/
#include<stdio.h>
int main(){
    int a1,a2,a3,b1,b2,b3,n;
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    scanf("%d",&n);
    if((a1+a2+a3)%5==0){
        n = n-(a1+a2+a3)/5;
    }else
        n = n-((a1+a2+a3)/5 + 1);
    if((b1+b2+b3)%10==0){
        n = n-(b1+b2+b3)/10;
    }else
        n = n-((b1+b2+b3)/10 + 1);   
    if(n >= 0)
        printf("YES");
    else    
        printf("NO");
    return 0;
}