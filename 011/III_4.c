#include <stdio.h>

int sum(int n) {
	int i, sum = 0;
	for (i = 1; i <= n; ++i)
		if (n % i == 0)
			sum += i;
	return sum;
}

int main(int argc, char *argv[]) {
	int n, i, aux, cnt = 0;
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &aux);
		if (sum(aux) == aux+1)
			++cnt;
	}

	printf("%d\n", cnt);

	return 0;
}

