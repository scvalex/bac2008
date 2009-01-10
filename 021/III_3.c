#include <stdio.h>

int isPrime(int n) {
	int i;
	for (i = 2; i*i <= n; ++i)
		if (n % i == 0)
			return 0;
	return 1;
}

int i_prim(int n) {
	int inf, sup;
	for (inf = n; !isPrime(inf); --inf)
		;
	for (sup = n; !isPrime(sup); ++sup)
		;
	return sup-inf;
}

int main(int argc, char *argv[]) {
	printf("%d\n", i_prim(32));

	return 0;
}

