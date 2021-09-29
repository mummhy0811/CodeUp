#include<stdio.h>
int main(void) {
	int w, h, b;
	scanf("%d %d %d", &w, &h, &b);
	double ans;
	ans = (((((double)w * (double)h * (double)b) / 8.0) / 1024.0) / 1024.0);
	printf("%.2lf MB", ans);
	return 0; 
}
