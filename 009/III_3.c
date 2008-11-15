#include <stdio.h>

void sub(int n, int k) {
	int i;

	for (i = n; i >= 1; --i)
		printf("%d ", k*i);
	printf("\n");
}

int main(int argc, char *argv[]) {
	int n, k;

	scanf("%d %d", &n, &k);
	sub(n, k);

	return 0;
}

