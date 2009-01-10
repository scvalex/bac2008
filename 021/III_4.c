#include <stdio.h>

int v[10000];

int main(int argc, char *argv[]) {
	int n, k, i, mi = 0;
	float sum = 0, maxsum = 0;

	FILE *fi = fopen("BAC.TXT", "r");
	fscanf(fi, "%d %d", &n, &k);
	for (i = 0; i < n; ++i)
		fscanf(fi, "%d", v+i);
	fclose(fi);

	for (i = 0; i < k; ++i)
		sum += v[i];
	maxsum = sum;
	for (; i < n; ++i) {
		sum = sum + v[i] - v[i-k];
		if (sum > maxsum) {
			maxsum = sum;
			mi = i-k+1;
		}
	}

	printf("%d\n", mi+1);

	return 0;
}

