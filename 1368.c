#include<stdio.h>

int main(void) {
	int h, k; char d;
	scanf("%d %d %c", &h, &k, &d);
	for (int line = 1; line <= h; line++) {
		if (d == 'L') {
			for (int j = 1; j < line; j++) printf(" ");
			for (int l=0; l < k; l++) printf("*");
			printf("\n");
		}
		if (d == 'R') {
			for (int j = 0; j < h-line; j++) printf(" ");
			for (int l = 0; l < k; l++) printf("*");
			printf("\n");
		}
	}
	return 0;
}
