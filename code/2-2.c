#include <stdio.h>

void swap(int *x, int*y) {
    int n = *x;
    *x = *y;
    *y = n;
}

int main() {
    int x = 100, y =200;

    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    
    return 0;
}
