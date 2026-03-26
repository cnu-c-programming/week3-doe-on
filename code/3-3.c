#include <stdio.h>
#include <stdarg.h>

int average(int count, ...) {
    va_list a;
    va_start(a, count);

    int sum = 0;

    for(int i = 0; i < count; i++) {
        int n = va_arg(a, int);
        sum += n;
    }

va_end(a);

    return sum / count;
}

int main() {
    printf("%d\n", average(3, 10, 20, 30));
    printf("%d\n", average(5, 10, 20, 30, 40, 50));
    
    return 0;
}
