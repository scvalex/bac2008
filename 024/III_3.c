#include <stdio.h>

int min(int a, int b) { if (a > b) return b; else return a; }
int max(int a, int b) { if (a > b) return a; else return b; }

void p(int n, int v[], int *mini, int *maxi, int *sum) {
	int i;
	*mini = *maxi = v[0];
	for (i = 0; i < n; ++i) {
		*sum += v[i];
		*mini = min(*mini, v[i]);
		*maxi = max(*maxi, v[i]);
	}
}

float wierdAvg(int n, int v[]) {
	int mini, maxi, sum;
	p(n, v, &mini, &maxi, &sum);
	sum -= mini + maxi;
	return (float)sum / (n-2);
}

int main(int argc, char *argv[]) {
	int n, v[100], i;
	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", v+i);
	
	printf("%.3f\n", wierdAvg(n, v));

	return 0;
}

