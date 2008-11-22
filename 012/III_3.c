#include <stdio.h>

void check_print(int a) {
	if (a % 5 == 0)
		printf("%d ", a);
}

int main(int argc, char *argv[]) {
	FILE *f1 = fopen("NR1.TXT", "r");
	FILE *f2 = fopen("NR2.TXT", "r");

	int a1, a2, eof1, eof2;
	eof1 = fscanf(f1, "%d", &a1);
	eof2 = fscanf(f2, "%d", &a2);
	while ((eof1 != EOF) && (eof2 != EOF)) {
		while ((a1 < a2) && (eof1 != EOF)) {
			check_print(a1);
			eof1 = fscanf(f1, "%d", &a1);
		}
		while ((a2 < a1) && (eof2 != EOF)) {
			check_print(a2);
			eof2 = fscanf(f2, "%d", &a2);
		}
		while ((eof1 != EOF) && (eof2 != EOF) && (a1 == a2)) {
			eof1 = fscanf(f1, "%d", &a1);
			eof2 = fscanf(f2, "%d", &a2);
		}
	}
	do {
		check_print(a1);
	} while (fscanf(f1, "%d", &a1) != EOF);
	do {
		check_print(a2);
	} while (fscanf(f2, "%d", &a2) != EOF);
	printf("\n");
	fclose(f2);
	fclose(f1);

	return 0;
}

