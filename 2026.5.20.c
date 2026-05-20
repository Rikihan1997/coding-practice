#include <stdio.h>
int main(void) {
    char s[11][100];
    for (int i = 0; i < 10;i++) {
        scanf("%s", s[i]);
    }
    for (int i = 0; i < 10;i++) {
        printf("%s\n", s[i]);
    }
    return 0;
}