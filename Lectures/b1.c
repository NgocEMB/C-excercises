#include <stdio.h>


int main(){
    int a;
    printf("Nhap gia tri cho bien a :"); // Câu dẫn
    scanf("%d", &a);
    printf("Gia tri cua a vua nhap : %d\n", a);
    int x, y, z;
    // Dùng 1 hàm scanf để nhập giá trị cho 1 lúc 3 biến
    scanf("%d %d %d ", &x, &y, &z);
    printf("%d %d %d", x, y, z);
    return 0;

}
