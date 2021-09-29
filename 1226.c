#include<stdio.h>
int main(void) {
	int num[6], lo[7], n = 0;
	for (int i = 0; i < 7; i++)
		scanf("%d", &lo[i]);
	for (int i = 0; i < 6; i++)
		scanf("%d", &num[i]);

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (lo[i] == num[j]) n++;
		}
	}
	for (int i = 0; i < 6; i++) {
		if ((n == 5) && (lo[6] == num[i])) {
			printf("2");
			goto exit;
		}
	}

	switch (n)
	{
	case 6:
		printf("1");
		break;
	case 5:
		printf("3");
		break;
	case 4:
		printf("4");
		break;
	case 3:
		printf("5");
		break;
	case 2:
	case 1:
	case 0:
		printf("0");
		break;
	}
	exit:
	return 0;
}
