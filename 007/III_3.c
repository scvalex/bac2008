#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, v[300], i, j, t;
	FILE *fo;

	scanf("%d", &n);
	for (i = 0; i < 3*n; ++i)
		scanf("%d", v+i);

	for (i = 0; (i < n) && (v[i] % 2 == 1); ++i)
		;
	for (j = 0; (j < n) && (v[3*n-j-1] % 2 == 0); ++j)
		;
	if ((j < n) && (i < n)) {
		t = v[i];
		v[i] = v[3*n-j-1];
		v[3*n-j-1] = t;
	}

	fo = fopen("BAC.TXT", "w");
	for (i = 0; i < 3*n; ++i)
		fprintf(fo, "%d ", v[i]);
	fprintf(fo, "\n");
	fclose(fo);

	return 0;
}

