#include <stdio.h>

int isprime(int n) {
	if (n == 1)
		return 0;
	int i;
	for (i = 2; i*i <= n; ++i)
		if (n % i == 0)
			return 0;
	return 1;
}

int main(int argc, char *argv[]) {
	int aux, n = 0, v[2];

	FILE *fi = fopen("BAC.IN", "r");
	while (fscanf(fi, "%d", &aux) != EOF) 
		if (isprime(aux))
			v[(n++) % 2] = aux;
	fclose(fi);

	if (n < 2)
		printf("Numere prime insuficiente\n");
	else
		printf("%d %d\n", v[n % 2], v[(n+1) % 2]);

	return 0;
}

