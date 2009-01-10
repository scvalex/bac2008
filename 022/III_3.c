#include <stdio.h>

int nz(int n) {
	int tot, i;
	tot = 0;
	for (i = 5; i <= n; i *= 5)
		tot += n / i;
	return tot;
}

int findK(int k) {
	if (!k) return 0;
	int l = 0, u = 1, m, numz;
	while (nz(u) < k)
		u <<= 1;
	while (l != u) {
		m = l + (u-l)/2;
		numz = nz(m);
		if (numz >= k)
			u = m;
		else
			l = m+1;
	}
	return l;
}

int main(int argc, char *argv[]) {
	printf("%d\n", findK(6));

	return 0;
}

