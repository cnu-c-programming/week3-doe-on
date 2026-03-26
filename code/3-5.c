#include <stdio.h>
#include <stdarg.h>

void my_sum(char type, int count, ...) {
    va_list a;
    va_start(a, count);

    if (type == 'S') { 
        for (int i = 0; i < count; i++) {
            char *str = va_arg(a, char*);
            printf("%s", str);
            if (i != count - 1) printf(" "); 
        }
        printf("\n");
    }
    else if (type == 'C') { 
        for (int i = 0; i < count; i++) {
            int ch = va_arg(a, int); 
            printf("%c", ch);
        }
        printf("\n");
    }
    else if (type == 'D') {
        int sum = 0;
        for (int i = 0; i < count; i++) {
            int n = va_arg(a, int);
            sum += n;
        }
        printf("%d\n", sum);
    }

    va_end(a);
}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
