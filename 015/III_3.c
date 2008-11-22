#include <stdio.h>

int numdiv(int n) {
	int i, cnt = 0;
	for (i = 1; i <= n; ++i)
		if (n % i == 0)
			++cnt;
	return cnt;
}

int main(int argc, char *argv[]) {
	int n, i, m = 0, mi, nd;
	scanf("%d", &n);

	for (i = 1; i <= n; ++i) {
		nd = numdiv(i);
		if (nd > m) {
			m = nd;
			mi = i;
		}
	}

	printf("%d\n", mi);

	return 0;
}

