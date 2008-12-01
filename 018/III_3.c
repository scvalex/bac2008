#include <stdio.h>

int count(float a[], int n) {
	int i, cnt = 0;
	float m = 0;
	for (i = 0; i < n; ++i)
		m += a[i]/n;
	for (i = 0; i < n; ++i)
		if (a[i] >= m)
			++cnt;
	return cnt;
}

int main(int argc, char *argv[]) {
	float a[] = {12.0, 7.5, 6.5, 3.0, 8.5, 7.5};
	printf("%d\n", count(a, 6));

	return 0;
}

