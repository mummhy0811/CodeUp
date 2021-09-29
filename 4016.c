#include<stdio.h>

int main(void) {
	int a, b, c, max=1, i,j=0;
	scanf("%d %d %d", &a, &b, &c);
	for (i = 1; i <= a; i++) {
		if (a % i == 0) {
			if (b % i == 0) {
				if (c % i == 0)
					max = i;
			}
		}
	}
	printf("%d", max);
}
