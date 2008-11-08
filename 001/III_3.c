#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, i, aux, writ;

	FILE *fi = fopen("bac.txt", "r");
	printf("n=");
	fflush(stdout);
	scanf("%d", &n);
	writ = 0;
	for (i = 0; i < n; ++i) {
		fscanf(fi, "%d", &aux);
		if (aux % n == 0) {
			printf("%d ", aux);
			writ = 1;
		}
	}
	fclose(fi);

	if (!writ)
		printf("NU EXISTA\n");

	return 0;
}

