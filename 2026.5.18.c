#include <stdio.h>
int main(void) {
    int s[] = { 813, 1, 2, 923874, 23648, 782356, 3256, 2342, 24324, 112 };
    int length = sizeof(s) / sizeof(s[0]);
    for (int i = 0;i < length; i++) {
        printf("%d\n", s[i]);
    }
    return 0;
}