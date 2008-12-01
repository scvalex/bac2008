#include <stdio.h>

int getItem(FILE *f, int i, int *li, int *aux) {
	while (*li < i) {
		fscanf(f, "%d", aux);
		++(*li);
	}
	return *aux;
}

int main(int argc, char *argv[]) {
	int n1, n2, i = 0, j = 0, li = -1, lj = -1, auxi, auxj;

	FILE *f1 = fopen("nr1.txt", "r");
	FILE *f2 = fopen("nr2.txt", "r");
	fscanf(f1, "%d", &n1);
	fscanf(f2, "%d", &n2);
	while ((i < n1) && (j < n2)) {
		if (getItem(f1, i, &li, &auxi) < getItem(f2, j, &lj, &auxj))
			printf("%d ", getItem(f1, i++, &li, &auxi));
		else if (getItem(f1, i, &li, &auxi) > getItem(f2, j, &lj, &auxj))
			printf("%d ", getItem(f2, j++, &lj, &auxj));
		else {
			printf("%d ", getItem(f1, i++, &li, &auxi));
			getItem(f2, j++, &lj, &auxj);
		}
	}
	for (; i < n1; ++i)
		printf("%d ", getItem(f1, i, &li, &auxi));
	for (; j < n2; ++j)
		printf("%d ", getItem(f2, j, &lj, &auxj));
	fclose(f2);
	fclose(f1);

	return 0;
}

