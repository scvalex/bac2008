#include <stdio.h>
#include <stdlib.h>

#define N 32

void swap(int v[], int a, int b) {
	int t = v[a];
	v[a] = v[b];
	v[b] = t;
}

void randomize(int v[], int n) {
	int i;

	for (i = 0; i < n; ++i)
		swap(v, i, rand() % n);
}

void printv(int v[], int n) {
	int i;

	for (i = 0; i < n; ++i)
		printf("%d ", v[i]);
	printf("\n");
}

void quicksort(int v[], int l, int u) {
	int m, i;

	if (l >= u)
		return;

	m = l;
	for (i = l+1; i <= u; ++i)
		if (v[i] < v[l])
			swap(v, ++m, i);
	swap(v, l, m);

	quicksort(v, l, m-1);
	quicksort(v, m+1, u);
}

int main(int argc, char *argv[]) {
	int v[N], i;

	for (i = 0; i < N; ++i)
		v[i] = i;
	randomize(v, N);

	printv(v, N);
	quicksort(v, 0, N-1);
	printv(v, N);

	return 0;
}

