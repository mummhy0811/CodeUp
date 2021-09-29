#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int n, a_sum = 0, b_sum = 0, c_sum=0, num = 1;
	scanf("%d", &n);
	int** std = (int**)malloc(sizeof(int*) * n);
	for (int i = 0; i < n; i++) std[i] = (int*)malloc(sizeof(int*) * 3);
	for (int i = 0; i < n; i++) {
		scanf("%d %d %d", &std[i][0], &std[i][1], &std[i][2]);
		a_sum += std[i][0];
		b_sum += std[i][1];
		c_sum += std[i][2];
	}
	int max = a_sum;
	int a_three = 0, b_three = 0, c_three = 0, a_two=0,b_two = 0, c_two = 0;
	for (int i = 0; i < n; i++) {
		if (std[i][0] == 3) a_three++;
		if (std[i][1] == 3) b_three++;
		if (std[i][2] == 3) c_three++;
		if (std[i][0] == 2) a_two++;
		if (std[i][1] == 2) b_two++;
		if (std[i][2] == 2) c_two++;
	}
	if (b_sum == c_sum) {
		if (max < b_sum) {
			if (b_three == c_three) {
				if (b_two == c_two) {
					max = b_sum;
					printf("0 %d", max);
					goto fr;
				}
				max = (b_two > c_two ? b_sum : c_sum);
				num = (b_two > c_two ? 2 : 3);
				goto end;
			}
			max = (b_three > c_three ? b_sum : c_sum);
			num = (b_three > c_three ? 2 : 3);
			goto end;
		}
		else if (max == b_sum) {
			for (int i = 0; i < n; i++) {
				if (std[i][0] == 3) a_three++;
				if (std[i][1] == 3) b_three++;
				if (std[i][2] == 3) c_three++;
			}
			if ((a_three == b_three) && (b_three == c_three)) {
				if ((a_two == b_two) && (b_two == c_two)) {
					printf("0 %d", max);
					goto fr;
				}
				max = (a_two > b_two ? a_two : b_two) > c_two ? (a_two > b_two ? a_two : b_two) : c_sum;
				if (max == a_two) {
					max = a_sum;
					num = 1;
				}
				else if (max == b_two) {
					max = b_sum;
					num = 2;
				}
				else num = 3;
				goto end;
			}
			max=(a_three > b_three ? a_three : b_three) > c_three ? (a_three > b_three ? a_three : b_three) : c_sum;
			if (max == a_three) {
				max = a_sum;
				num = 1;
			}
			else if (max == b_three) {
				max = b_sum;
				num = 2;
			}
			else num = 3;
			goto end;
		}
	}
	else if (b_sum > c_sum) {
		if (max < b_sum) {
			max = b_sum;
			num = 2;
			goto end;
		}
		else if (max == b_sum) {
			if (a_three == b_three) {
				if (b_two == a_two) {
					max = b_sum;
					printf("0 %d", max);
					goto fr;
				}
				max = (a_two > b_two ? a_sum : b_sum);
				num = (a_two > b_two ? 1 : 2);
				goto end;
			}
			max = (a_three > b_three ? a_sum : b_sum);
			num = (a_three > b_three ? 1 : 2);
			goto end;
		}
	}
	else if (b_sum < c_sum) {
		if (max < c_sum) {
			max = c_sum;
			num = 3;
			goto end;
		}
		else if (max == c_sum) {
			if (a_three == c_three) {
				if (a_two == c_two) {
					max = a_sum;
					printf("0 %d", max);
					goto fr;
				}
				max = (a_two > c_two ? a_sum : c_sum);
				num = (a_two > c_two ? 1 : 3);
				goto end;
			}
			max = (a_three > c_three ? a_sum : c_sum);
			num = (a_three > c_three ? 1 : 3);
			goto end;
		}
	}
end:
	printf("%d %d", num, max);
	fr:
	for (int i = 0; i < n; i++) free(std[i]);
	free(std);
	return 0;
}
