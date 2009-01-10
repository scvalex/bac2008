#include <stdio.h>

int greatestPowerOfTwo(int n) {
	int l;
	while (n) {
		l = n;
		n &= n-1;
	}
	return l;
}

int main(int argc, char *argv[]) {
	int n, l, u, g2;
	FILE *fi = fopen("BAC.TXT", "r");
	fscanf(fi, "%d", &n);
	while (n--) {
		fscanf(fi, "%d %d", &l, &u);
		g2 = greatestPowerOfTwo(u);
		if (g2 < l)
			g2 = 0;
		printf("%d ", g2);
	}
	fclose(fi);

	return 0;
}

