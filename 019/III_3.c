#include <stdio.h>

void swap(float *a, float *b) {
	float aux = *a;
	*a = *b;
	*b = aux;
}

void aranjare(float a[], int n) {
	int l = 0, i;
	for (i = 0; i < n; ++i)
		if (a[i] < 0)
			swap(&a[l++], &a[i]);
}

void printv(float a[], int n) {
	int i;
	for (i = 0; i < n; ++i)
		printf("%.2f ", a[i]);
	printf("\n");
}

int main(int argc, char *argv[]) {
	float a[] = {12, -7.5, 6.5, -3, -8, 7.5};
	aranjare(a, 6);
	printv(a, 6);

	return 0;
}

