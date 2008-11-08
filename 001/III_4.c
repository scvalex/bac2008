#include <stdio.h>

int sub(int v[], int n, int a) {
	int cnt, i;

	cnt = 0;
	for (i = 0; i < n; ++i)
		if (v[i] < a)
			++cnt;

	return cnt;
}

int main(int argc, char *argv[]) {
	int n, i, v[100], lt, gt, dups;

	printf("n=");
	fflush(stdout);
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", v+i);
	
	dups = 0;
	for (i = 0; i < n; ++i) {
		lt = sub(v, n, v[i]);
		gt = sub(v, n, v[i]+1);
		if (gt-lt > 1) {
			dups = 1;
			break;
		}
	}

	if (dups)
		printf("NU\n");
	else
		printf("DA\n");

	return 0;
}

