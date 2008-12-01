#include <stdio.h>

void swap(int *a, int *b) {
	int aux = *a;
	*a = *b;
	*b = aux;
}

void nule(int a[], int n) {
	int l, i;
	for (i = 0, l = 0; i < n; ++i)
		if (a[i])
			swap(a+l++, a+i);
}

void printv(int a[], int n) {
	int i;
	for (i = 0; i < n; ++i)
		printf("%d ", a[i]);
	printf("\n");;
}

int main(int argc, char *argv[]) {
	int a[] = {12, 0, 0, -3, -8, 0};
	nule(a, 6);
	printv(a, 6);

	return 0;
}

