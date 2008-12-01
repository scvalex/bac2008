#include <stdio.h>

int multiplu(int a[], int n, int k) {
	int i, cnt = 0;
	for (i = 0; i < n; ++i)
		if ((a[i] % k == 0) && (a[i] % 10 == k))
			++cnt;
	return cnt;
}

int main(int argc, char *argv[]) {
	int a[] = {2, 273, 63, 83, 93, 123};
	printf("%d\n", multiplu(a, 6, 3));

	return 0;
}

