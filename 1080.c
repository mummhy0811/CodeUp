#include<stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		sum += i;
		if (sum >= n) {
			printf("%d", i);
			break;
		}
	}
	return 0; 
}
