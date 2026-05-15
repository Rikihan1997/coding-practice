#include <stdio.h>
#include <string.h> 

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    char s[100][100]; // 存储操作符
    int a[100][100];  // 存储数字
    int count[100];   // 关键：记录每一行到底有几个数字

    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);

        if (strcmp(s[i], "SET") == 0) {
            scanf("%d %d", &a[i][0], &a[i][1]);
            count[i] = 2; // 这一行有 2 个数字
        }
        else if (strcmp(s[i], "ADD") == 0 || strcmp(s[i], "SUB") == 0) {
            scanf("%d", &a[i][0]);
            count[i] = 1; // 这一行有 1 个数字
        }
    }

    printf("%d\n", n + 1);

    for (int i = 0; i < n; i++) {
        // 1. 先原样输出操作符
        printf("%s\n", s[i]);

        // 2. 根据该行记录的数量 count[i] 来循环输出数字
        for (int j = 0; j < count[i]; j++) {
            printf("%d\n", a[i][j] + 1);
        }
    }

    return 0;
}