	#include<stdio.h>
	int main() {
		int count = 0;
		for (int i = 1; i < 51; i++) {
			if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
				count += 1;
			}
			if (i / 10 == 3) {
				count += 1;
			}
			if (count == 0) {
				printf("%d\t", i);
			}
			else if (count == 1) {
				printf("clp\t");
			}
			else if (count == 2) {
				printf("clpclp\t");
			
			}
			if (i % 10 == 0) {
				printf("\n");
			}
			count = 0;
		}
		return 0;
	}