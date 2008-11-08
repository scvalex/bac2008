#include <stdio.h>

int cif(int n, int b) {
	int cnt = 0;

	while (n) {
		if (n % 10 == b)
			++cnt;
		n /= 10;
	}

	return cnt;
}

int main(int argc, char *argv[]) {
	int n, nr, cnti, i;

	scanf("%d", &n);

	cnti = 0;
	for (i = 9; i >= 0; --i) {
		nr = cif(n, i);
		if (nr % 2 == 1)
			++cnti;
	}

	if (cnti > 1) {
		printf("0\n");
	} else {
		for (i = 9; i >= 0; --i) {
			nr = cif(n, i);
			while (nr) {
				printf("%d", i);
				nr -= 2;
			}
		}
		for (i = 0; i <= 9; ++i) {
			nr = cif(n, i);
			while (nr) {
				printf("%d", i);
				nr -= 2;
			}
		}
		printf("\n");
	}

	return 0;
}

