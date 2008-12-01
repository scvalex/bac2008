#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, i, a, aux, pos = 0;
	FILE *fi = fopen("numere.txt", "r");
	fscanf(fi, "%d", &n);
	if (!n) return 0;
	fscanf(fi, "%d", &a);
	for (i = 0; i < n; ++i) {
		fscanf(fi, "%d", &aux);
		if (aux < a)
			++pos;
	}
	fclose(fi);

	printf("%d\n", pos);

	return 0;
}

