#include <stdio.h>

int main(int argc, char *argv[]) {
	int k, aux, ok = 0, pos = 1;
	scanf("%d", &k);
	FILE *fi = fopen("numere.txt", "r");
	while (fscanf(fi, "%d", &aux) != EOF)
		if (aux > k)
			++pos;
		else if (aux == k)
			ok = 1;
	fclose(fi);

	if (ok)
		printf("%d\n", pos);
	else
		printf("nu exista\n");

	return 0;
}

