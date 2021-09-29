#include<stdio.h>
int main(void) {
	int n, num;
	int std[23] = {0, };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		std[num-1]++;
	}
	for (int i = 0; i < 23; i++) printf("%d ",std[i]);
	return 0;
}
