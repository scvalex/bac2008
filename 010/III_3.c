#include <stdio.h>

int isPrime(int n) {
	int i;

	for (i = 2; i*i <= n; ++i)
		if (n % i == 0)
			return 0;
	
	return 1;
}

void sub(int n, int *a, int *b) {
	int i, num;

	num = 0;
	for (i = n-1; (i >= 2) && (num < 2); --i) {
		if (isPrime(i)) {
			if (num == 0)
				*a = i;
			else
				*b = i;
			++num;
		}
	}
}

int main(int argc, char *argv[]) {
	int n, a, b;

	scanf("%d", &n);

	sub(n, &a, &b);

	printf("%d %d\n", a, b);

	return 0;
}

