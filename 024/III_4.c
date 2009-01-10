#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, v[30000], l, u, i;

	FILE *fi = fopen("bac.txt", "r");
	fscanf(fi, "%d", &n);
	for (i = 0; i < n; ++i)
		fscanf(fi, "%d", v+i);
	fscanf(fi, "%d %d", &l, &u);
	fclose(fi);

	for (i = 0; i < n; ++i)
		if (u < v[i]) {
			printf("NU\n");
			break;
		} else if (l <= v[i]) {
			printf("%d\n", v[i]);
			break;
		}

	return 0;
}

