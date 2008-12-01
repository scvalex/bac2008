#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int aux, digs[10], i;
	memset(digs, 0, sizeof(digs));

	FILE *fi = fopen("numere.txt", "r");
	while (fscanf(fi, "%d", &aux) != EOF) {
		for (; aux; aux /= 10)
			++digs[aux % 10];
	}
	fclose(fi);

	for (i = 9; i >= 0; --i)
		for (; digs[i]; --digs[i])
			printf("%d", i);
	printf("\n");

	return 0;
}

