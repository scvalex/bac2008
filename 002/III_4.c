#include <stdio.h>

int f(int a) {
	int sum, i;

	sum = 0;
	for (i = 2; i <= a; ++i)
		while (a % i == 0) {
			++sum;
			a /= i;
		}

	return sum;
}

void brkdig(int n, int v[], int *m) {
	*m = 0;
	while (n) {
		v[*m] = n % 10;
		*m += 1;
		n /= 10;
	}
}

int nextseq(int v[], int n) {
	int i;

	i = n - 1;
	++v[i];
	while ((i >= 0) && (v[i] == n)) {
		v[i] = 0;
		--i;
		++v[i];
	}

	if (i < 0)
		return 0;
	return 1;
}

int uniq(int v[], int n) {
	int i, j;

	for (i = 0; i < n; ++i)
		for (j = i + 1; j < n; ++j)
			if (v[i] == v[j])
				return 0;
	
	return 1;
}

int nextperm(int v[], int n) {
	int r;

	do {
		r = nextseq(v, n);
	} while ((r != 0) && !uniq(v, n));

	return r;
}

int buildnum(int v[], int p[], int m) {
	int i, num;

	num = 0;
	for (i = 0; i < m; ++i)
		num = num * 10 + v[p[i]];
	
	return num;
}

int main(int argc, char *argv[]) {
	int n, m, val, extraprim;
	int v[3] = {0, 0, 0};
	int p[3] = {0, 1, 2};
	int i;

	scanf("%d", &n);

	brkdig(n, v, &m);

	extraprim = 1;
	do {
		val = buildnum(v, p, m);
		if (f(val) > 1) {
			extraprim = 0;
			break;
		}
	} while (nextperm(p, m));

	if (extraprim)
		printf("DA\n");
	else
		printf("NU\n");

	return 0;
}

