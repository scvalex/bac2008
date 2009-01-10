#include <stdio.h>
#include <stdlib.h>

typedef struct Interval {
	int l, u;
} Interval;

int ltInterval(const void *a, const void *b) {
	return ((Interval*)a)->l - ((Interval*)b)->l;
}

int main(int argc, char *argv[]) {
	int n, i;
	Interval v[1000];

	FILE *fi = fopen("BAC.TXT", "r");
	fscanf(fi, "%d", &n);
	for (i = 0; i < n; ++i)
		fscanf(fi, "%d %d", &(v[i].l), &(v[i].u));
	fclose(fi);

	if (n == 1) {
		printf("%d %d\n", v[0].l, v[0].u);
		return 0;
	}

	qsort(v, n, sizeof(v[0]), ltInterval);

	for (i = 0; i < n-1; ++i)
		if (v[i].u < v[i+1].l)
			printf("%d %d\n", v[i].l, v[i].u);
		else
			++i;
	if (i < n)
		printf("%d %d\n", v[n-1].l, v[n-1].u);

	return 0;
}

