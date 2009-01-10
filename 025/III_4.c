#include <stdio.h>

int gcd(int a, int b) {
	int r = a % b;
	while (r) {
	 	a = b;
		b = r;
		r = a % b;
	}
	return b;
}

void printRat(float r) {
	int a = r * 10000000, b = 10000000, g;
	g = gcd(a, b);
	printf("%d %d\n", a/g, b/g);
}

int main(int argc, char *argv[]) {
	float r;

	FILE *fi = fopen("NUMAR.TXT", "r");
	fscanf(fi, "%f", &r);
	fclose(fi);

	printRat(r);

	return 0;
}

