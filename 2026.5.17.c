#include <stdio.h>
#include<string.h>

int main(void) {
    int n;
    char s[101];
    char t[101];
    scanf("%d %s %s", &n, s, t);
    for (int i = 0; i < n; i++) {
        if (s[i] > t[i]) {
            printf("Yes");
            return 0;
        }
        if (s[i] < t[i]) {
            printf("No");
            return 0;
        }
    }
    return 0;
}