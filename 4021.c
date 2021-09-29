#include<stdio.h>

int main(void) {
	int num[8] = { 0 };
	int sum = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &num[i]);
		if (num[i] % 2 == 1) {
			sum += num[i];
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d", sum);
}
