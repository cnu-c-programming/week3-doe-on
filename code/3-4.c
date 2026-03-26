#include <stdio.h>
#include <stdarg.h>

int max_of(int count, ...) {
    va_list a;
    va_start(a, count);

    int max = va_arg(a, int);

    for (int i = 1; i < count; i++) {
        int num = va_arg(a, int);
        if (num > max) {
            max = num;
        }
    }
    va_end(a);
    return max;
}

int main() {
    printf("%d\n", max_of(4, 5, 12, 3, 9));
    printf("%d\n", max_of(6, 1, 2, 3, 4, 5, 6));
    printf("%d\n", max_of(3, 100, 200, 300));

    return 0;
}
