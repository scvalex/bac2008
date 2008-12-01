#include <stdio.h>

int main(int argc, char *argv[]) {
	int n1, n2, a, b, i = 1, j = 1;

	FILE *f1 = fopen("nr1.txt", "r");
	FILE *f2 = fopen("nr2.txt", "r");
	fscanf(f1, "%d", &n1);
	fscanf(f2, "%d", &n2);
	if (!n1 || !n2) return 0;
	fscanf(f1, "%d", &a);
	fscanf(f2, "%d", &b);
	while ((i < n1) && (j < n2)) {
		while ((i < n1) && (a < b)) {
			fscanf(f1, "%d", &a);
			++i;
		}
		while ((j < n2) && (a > b)) {
			fscanf(f2, "%d", &b);
			++j;
		}
		if (a == b)
			printf("%d ", a);
			
		fscanf(f1, "%d", &a);
		++i;
		fscanf(f2, "%d", &b);
		++j;
	}
	printf("\n");
	fclose(f2);
	fclose(f1);

	return 0;
}

