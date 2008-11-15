#include <stdio.h>

int main(int argc, char *argv[]) {
	int v[1000], i, aux, num;
	FILE *fi;

	for (i = 0; i < 1000; ++i)
		v[i] = 0;

	fi = fopen("BAC.TXT", "r");
	while (fscanf(fi, "%d", &aux) != EOF) {
		if (aux < 1000)
			v[aux] = 1;
	}
	fclose(fi);

	num = 0;
	for (i = 999; (i > 99) && (num < 2); --i)
		if (!v[i]) {
			printf("%d ", i);
			++num;
		}
	if (num != 2)
		printf("0");
	printf("\n");

	return 0;
}

