#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, a[100], m, b[100], i, *aa, *bb, na, nb;
	FILE *fo;

	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", a+i);
	scanf("%d", &m);
	for (i = 0; i < m; ++i)
		scanf("%d", b+i);

	if (m > n) {
		aa = b; na = m;
		bb = a; nb = n;
	} else {
		aa = a; na = n;
		bb = b; nb = m;
	}

	fo = fopen("BAC.TXT", "w");
	for (i = 0; (i < na) && (i < nb); ++i)
		fprintf(fo, "%d %d ", aa[i], bb[i]);
	if (i < na)
		fprintf(fo, "%d", aa[i]);
	fprintf(fo, "\n");
	fclose(fo);

	return 0;
}

