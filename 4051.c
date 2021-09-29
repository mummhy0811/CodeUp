#include <stdio.h>
int main(void) {
	float s[5], e[5], work[6] = { 0, };
	int money[6] = { 0, };
	for (int i = 0; i < 5; i++) {
		scanf("%f %f", &s[i], &e[i]);
		work[i] = e[i] - s[i]-1;
	}
	for (int i = 0; i < 5; i++) {
		if (work[i] >= 4) {
			work[5] += 4.0;
			money[i] = 8 * 5000;
		}
		else if ((0< work[i])&&(work[i] < 4)) {
			work[5] += work[i];
			money[i] = (work[i] / 0.5) * 5000;
		}
		money[5] += money[i];
	}
	if (work[5] >= 15) money[5] *=0.95;
	else if (work[5] <= 5) money[5] *=1.05;
	printf("%d", money[5]);
	return 0;
}
