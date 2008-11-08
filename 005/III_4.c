#include <stdio.h>
#include <stdlib.h>

int f(int n) {
	int i;

	for (i = 2; i <= n; ++i)
		if (n % i == 0)
			return i;
}

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main(int argc, char *argv[]) {
	int n, i, aux, v[100], m;

	printf("n=");
	fflush(stdout);
	scanf("%d", &n);

	m = 0;
	for (i = 0; i < n; ++i) {
		scanf("%d", &aux);
		if (f(aux) == aux)
			v[m++] = aux;
	}

	if (m == 0) {
		printf("NU EXISTA\n");
	} else {
		qsort(v, m, sizeof(v[0]), cmp);

		for (i = 0; i < m; ++i)
			printf("%d ", v[i]);
		printf("\n");
	}

	return 0;
}

