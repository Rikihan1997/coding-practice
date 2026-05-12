#include <stdio.h>
int main(void) {
    int n;
    char s1[100][100];
    int s2[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", s1[i], &s2[i]);
    }
    printf("%d\n", n + 1);
    for (int i = 0; i < n; i++) {
        printf("%s\n%d\n", s1[i], s2[i] + 1);
    }
    return 0;
}