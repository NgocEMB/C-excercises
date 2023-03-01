#include <stdio.h>

int main() {
    int j = 0;
    for (j = 0; j < 5; j++) {
        for (int i = 0; i < 3; i++) {
            printf("%d %d\n", j, i);
        }
    }

    return 0;
}