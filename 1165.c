#include<stdio.h>
int main(void) {
	int time, nowscore, endscore, plus;
	scanf("%d %d", &time, &nowscore);
	endscore = nowscore;
	for (int i = time; i < 90; i += 5) endscore++;
	printf("%d", endscore);
	return 0;
}
