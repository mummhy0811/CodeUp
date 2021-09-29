#include<stdio.h>
#include<stdlib.h>

struct score {
	char name[11];
	int a, b, c;
};
int main(void) {
	int n;
	scanf("%d", &n);
	struct score* student;
	student = (struct score*)malloc(sizeof(struct score) * n);
	for (int i = 0; i < n; i++) scanf("%s %d %d %d", &student[i].name, &student[i].a, &student[i].b, &student[i].c);
	int best_id = 0;
	for (int i = 1; i < n; i++) {
		if (student[i].a > student[best_id].a) best_id = i;
	}
	int rank_b = n, rank_c = n;
	for (int i = 0; i < n; i++) {
		if (i != best_id) {
			if (student[best_id].b >= student[i].b) rank_b--;
			if (student[best_id].c >=student[i].c) rank_c--;
		}
	}
	printf("%s %d %d", student[best_id].name, rank_b, rank_c);
	free(student);
}
