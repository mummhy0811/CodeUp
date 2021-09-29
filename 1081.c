#include<stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= a; i++) {
		for (int k = 1; k <= b; k++) {
			printf("%d %d\n", i, k);
		}
	}
	return 0; 
}
