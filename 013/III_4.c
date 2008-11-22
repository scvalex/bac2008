#include <stdio.h>

int dropodd(int n) {
	int newn = 1;
	while (n) {
		if (n % 10 % 2 == 0)
			newn = newn*10 + n % 10;
		n /= 10;
	}
	while (newn > 1) {
		n = n*10 + newn % 10;
		newn /= 10;
	}
	return n;
}

int main(int argc, char *argv[]) {
	FILE *fi = fopen("BAC.IN", "r");
	FILE *fo = fopen("BAC.OUT", "w");

	int n;
	while (fscanf(fi, "%d", &n) != EOF) {
		n = dropodd(n);
		if (n)
			fprintf(fo, "%d ", n);
	}
	fprintf(fo, "\n");
	fclose(fo);
	fclose(fi);

	return 0;
}

