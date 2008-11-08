#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main(int argc, char *argv[]) {
	int v[100], n, aux, i;

	FILE *fi = fopen("NR.TXT", "r");
	n = 0;
	while (fscanf(fi, "%d", &aux) != EOF) {
		if (aux > 0)
			v[n++] = aux;
	}
	fclose(fi);

	qsort(v, n, sizeof(v[0]), cmp);

	for (i = 0; i < n; ++i)
		printf("%d ", v[i]);
	printf("\n");

	return 0;
}

