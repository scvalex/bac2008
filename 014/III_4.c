#include <stdio.h>

void printv(int v[], int n) {
	int i;
	for (i = 0; i < n; ++i)
		printf("%d ", v[i]);
	printf("\n");
}

int sumdig(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(int argc, char *argv[]) {
	int n = 0, aux, v[5], p = 0;
	FILE *fi = fopen("BAC.TXT", "r");
	while (fscanf(fi, "%d", &aux) != EOF) {
		v[n++] = aux;
		if (n == 5) {
			printv(v, n);
			n = 0;
		}
		if (sumdig(aux) % 2 == 0)
			++p;
	}
	if (n)
		printv(v, n);
	printf("%d\n", p);
	fclose(fi);

	return 0;
}

