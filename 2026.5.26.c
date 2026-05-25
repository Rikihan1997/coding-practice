#include<stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < n;i++) {
        for (int j = 0;j < m;j++) {
           int high = 0;
           if (j > 0) {
               do {
                   printf(" ");
                   high++;
               } while (high < j);
               printf("*\n");
           }
           else {
               printf("*\n");
           }
        }
        for (int k = m - 2;k >= 0;k--) {
            int high = 0;
            if (k > 0) {
                do {
                    printf(" ");
                    high++;
                } while (high < k);
                printf("*\n");
            }
            else {
                printf("*\n");
            }
        }

    }
    return 0;
}