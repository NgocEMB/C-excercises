#include <stdio.h>

int global_val = 10;

int tong(int a, int b) {
    int sum = a+b+global_val;
    return sum;
}

int main() {
    printf("global_val = %d\n", global_val);
    int global_val = 20;
    printf("global_val = %d\n", global_val);

    int enlosing_val = 5;
    {
        int enlosing_val = 15;
        printf("enlosing_val = %d\n", enlosing_val);
    }
    printf("enlosing_val = %d\n", enlosing_val);
    printf("tong = %d\n", tong(5,5));


    return 0;
}