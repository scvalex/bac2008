#include <stdio.h>

void shift(int n, int v[]) {
	int i, aux = v[0];
	for (i = 0; i < n-1; ++i)
		v[i] = v[i+1];
	v[n-1] = aux;
}

void vecrev(int n, int v[]) {
	int i;
	for (i = n; i > 0; --i)
		shift(i, v);
}

int main(int argc, char *argv[]) {
	int n, i, v[100];
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", v+i);

	vecrev(n, v);
	
	for (i = 0; i < n; ++i)
		printf("%d ", v[i]);
	printf("\n");

	return 0;
}

