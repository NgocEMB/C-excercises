#include <stdio.h>

void tong1(int a, int b) {      //ham khong co du lieu tra ve
    int tong = a + b;
    printf("tong = %d\n", tong);   
}

int tong2(int a, int b) {       //ham co du lieu tra ve
    int tong = a + b;
    tong1(1, 1);
    return tong;
}

int main() {
    printf("Truoc khi goi ham\n");
    tong1(5, 4);                //function call
    int tong = tong2(5, 2);     //bat lay gia tri tra ve

    printf("tong2 = %d\n", tong);
    printf("Sau khi goi ham\n");

    return 0;
}