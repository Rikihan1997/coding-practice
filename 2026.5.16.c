#include <stdio.h>
int main(void) {
    int s[5];
    int ans = 0;

    scanf("%d %d %d %d %d", &s[0], &s[1], &s[2], &s[3], &s[4]);
    for (int i = 0; i < 5; i++) {
        ans += s[i];
    }

    int max = s[0];
    int min = s[0];
    int temp;
    for (int i = 0; i < 5; i++) {
        temp = s[i];
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }

    }
    printf("%d", ans - min - max);
    return 0;
}