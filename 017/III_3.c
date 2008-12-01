#include <stdio.h>

int min(int a, int b) { return (a<b) ? a : b; }
int max(int a, int b) { return (a<b) ? b : a; }

int interval(int a[], int n) {
	int l = min(a[0], a[n-1]),
	    u = max(a[0], a[n-1]),
	    i, cnt = 0;
	for (i = 0; i < n; ++i)
		if ((l <= a[i]) && (a[i] <= u))
			++cnt;
	return cnt;
}

int main(int argc, char *argv[]) {
	int a[] = {12, 27, 6, 8, 9, 2};	
	printf("%d\n", interval(a, 6));

	return 0;
}

