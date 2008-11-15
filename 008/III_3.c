#include <stdio.h>

int issquare(int n) {
	int i;

	for (i = 1; i*i < n; ++i)
		;
	
	return i*i == n;
}

int main(int argc, char *argv[]) {
	int n, aux, t, i;

	scanf("%d", &n);
	t = 0;
	for (i = 0; i < n; ++i) {
		scanf("%d", &aux);
		if (issquare(aux))
			t += aux;
	}

	printf("%d\n", t);

	return 0;
}

