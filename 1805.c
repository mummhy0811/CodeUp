#include <stdio.h>

struct machine {
	int a, b;
};
int main(void) {
	int n;
	scanf("%d ", &n);
	struct machine * p = (struct machine*)malloc(sizeof(struct machine) * n);
	for (int i = 0; i < n; i++) scanf("%d %d", &p[i].a, &p[i].b);
	for (int i = 0; i < n-1; i++) {
		for (int j=0; j < n-1-i; j++) {
			if (p[j].a > p[j + 1].a) {
				struct machine tmp;
				tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) printf("%d %d\n", p[i].a, p[i].b);
	free(p);
	return 0;
}
