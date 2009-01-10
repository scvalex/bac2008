#include <stdio.h>

int f(int n, int a[]) {
	int nr = 0, found = 0, i, tens = 1;
	for (i = 0; i < n; ++i)
		if (a[i] % 2 == 0) {
			nr = tens*a[i] + nr;
			tens *= 10;
			found = 1;
		}
	if (found)
		return nr;
	return -1;
}

int main(int argc, char *argv[]) {
	int n = 3, a[6] = {3, 7, 1};
	printf("%d\n", f(n, a));

	return 0;
}

