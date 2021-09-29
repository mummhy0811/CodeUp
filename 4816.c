#include <stdio.h>

int main(void) {
	int t, a_cnt=0, b_cnt=0, c_cnt=0;
	scanf("%d", &t);
	while (t!=0) {
		if (t % 10 != 0) {
			printf("-1");
			return 0;
		}
		while (t >= 300) {
			t = t - 300;
			a_cnt++;
		}
		while (t >= 60) {
			t = t - 60;
			b_cnt++;
		}
		while (t > 0) {
			t = t - 10;
			c_cnt++;
		}
	}
	printf("%d %d %d", a_cnt, b_cnt, c_cnt);
	return 0;
}
