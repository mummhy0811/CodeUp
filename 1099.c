#include<stdio.h>
int main(void) {
	int box[11][11] = { {0}, };
	for (int i = 1; i <= 10; i++) 
		for (int j = 1; j <= 10; j++)
			scanf("%d", &box[i][j]);
	int x = 2,y = 2;
	while (1) {
		if (box[2][2] == 2) {
			box[2][2] = 9; break;
		}
		else box[2][2] = 9;

		if (box[x][y + 1] == 2) {
			box[x][y + 1] = 9;
			break;
		}
		else if (box[x][y + 1] == 0) {
			box[x][y + 1] = 9;
			y++;
		}
		else if (box[x + 1][y] == 2) {
			box[x+1][y] = 9;
			break;
		}
		else if (box[x + 1][y] == 0) {
			box[x + 1][y] = 9;
			x++;
		}
		if (((box[x][y + 1] == 1) && (box[x + 1][y] == 1)) || box[9][9] == 9) break;
	}
	for (int i = 1; i < 11; i++) {
		for (int j = 1; j < 11; j++)
			printf("%d ", box[i][j]);
		printf("\n");
	}
	return 0;
}
