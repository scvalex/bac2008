#include <stdio.h>

int alldigeq(int n) {
	int dig;
	for (dig = n % 10; n; n /= 10)
		if (n % 10 != dig)
			return 0;
	return 1;
}

int main(int argc, char *argv[]) {
	int n, i, aux, cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &aux);
		if (alldigeq(aux))
			++cnt;
	}
	printf("%d\n", cnt);

	return 0;
}

