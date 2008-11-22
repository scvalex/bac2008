#include <stdio.h>

int max(int a, int b) {
	return (a > b) ? a : b;
}

int main(int argc, char *argv[]) {
	FILE *fi = fopen("numere.txt", "r");
	int n;
	fscanf(fi, "%d", &n);
	int i, m = -1, aux;
	for (i = 0; i < n; ++i) {
		fscanf(fi, "%d", &aux);
		m = max(m, aux);
		printf("%d ", m);
	}
	printf("\n");
	fclose(fi);

	return 0;
}

