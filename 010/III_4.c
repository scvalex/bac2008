#include <stdio.h>

int main(int argc, char *argv[]) {
	float t[10000];
	int i, k, v;
	FILE *fi;

	for (i = 0; i < 10000; ++i)
		t[i] = 0;

	fi = fopen("PRODUSE.TXT", "r");
	while (fscanf(fi, "%d %d %d", &i, &k, &v) != EOF)
		t[i] += k*v;
	fclose(fi);

	for (i = 0; i < 10000; ++i)
		if (t[i])
			printf("%d %.0f\n", i, t[i]);

	return 0;
}

