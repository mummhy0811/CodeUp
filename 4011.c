#include<stdio.h>

int main(void) {
	char arr[15] = { 0 };

	for (int i = 0; i < 15; i++) {
		scanf("%c", &arr[i]);
	}
	if ((arr[7] == '1') || (arr[7]=='2')){
		if (arr[7]=='1') printf("19%c%c/%c%c/%c%c M", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
		else printf("19%c%c/%c%c/%c%c F", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	}
	else if ((arr[7] == '3') ||(arr[7]== '4')) {
		if (arr[7] == '3') printf("20%c%c/%c%c/%c%c M", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
		else printf("20%c%c/%c%c/%c%c F", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	}
	return 0;
}
