#include <stdio.h>

//Function prototype
void tong1(int a, int b);
int tong2(int, int);
void count(void);

int main() {
    printf("Truoc khi goi ham\n");
    int x = 5;
    int y = 4;
    tong1(x, y);                //function call
    int tong = tong2(5, 2);     //bat lay gia tri tra ve

    printf("tong2 = %d\n", tong);
    printf("Sau khi goi ham\n");
    //Đếm số lần nhảy vào hàm
    count();
    count();
    count();
    count();

    return 0;
}

int tong2(int a, int b) {       //ham co du lieu tra ve
    int tong = a + b;
    tong1(1, 1);
    return tong;
}

void tong1(int a, int b) {      //ham khong co du lieu tra ve
    int tong = a + b;
    printf("tong = %d\n", tong);   
}

void count(void) {
    //Là biến cục bộ
    static int count = 1;   //Khởi tạo đúng 1 lần, và tồn tại đến khi kết thúc chương trình
    printf("Lan %d\n", count);
    count++;
}