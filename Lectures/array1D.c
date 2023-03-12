#include <stdio.h>
#define MAX 1000

void hienThi(int a[], int length) {
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }   
}

void nhap(int a[], int length) {
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }   
}

int main() {
    int a[MAX];
    int size_arr;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &size_arr);
    printf("Nhap tung phan tu mang: ");
    nhap(a, size_arr);
    printf("In mang: ");
    hienThi(a, size_arr);

    return 0; 
}