#include <stdio.h>

#define ADDR    0x1234ABCDUL  

int main(){
    int a = 100;
    int b = 100 + a++ ;
    printf("%d %d", a, b);

    return 0;

}
