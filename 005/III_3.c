#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	FILE *fo;

	printf("n=");
	fflush(stdout);
	scanf("%d", &n);

	fo = fopen("NR.TXT", "w");
	while (n) {
		fprintf(fo, "%d ", n);
		n /= 10;
	}
	fprintf(fo, "\n");
	fclose(fo);

	return 0;
}

