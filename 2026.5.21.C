#include <stdio.h>
#include<string.h>
int main(void) {
    char n[1005];
    scanf("%s", n);
    int len = strlen(n);
    for (int i = 0;i < len;i++) {
        printf("%c", n[i]);
        if ((len - i - 1) % 3 == 0 && i != len - 1) {
            printf(",");
        }
    }
    return 0;
}