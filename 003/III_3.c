#include <stdio.h>
#include <stdlib.h>

int nrdig(int n) {
	int i;

	for (i = 0; n; ++i)
		n /= 10;
	
	return i;
}

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main(int argc, char *argv[]) {
	int aux, v[100], n, i;

	FILE *fi = fopen("NR.TXT", "r");
	n = 0;
	while (fscanf(fi, "%d", &aux) != EOF)
		if (nrdig(aux) >= 3)
			v[n++] = aux;
	fclose(fi);

	if (n > 0) {
		qsort(v, n, sizeof(v[0]), cmp);

		for (i = 0; i < n; ++i)
			printf("%d ", v[i]);
		printf("\n");
	} else {
		printf("NU EXISTA\n");
	}

	return 0;
}

