#include <stdio.h>

int main(int argc, char *argv[]) {
	float c, last;
	int num;

	FILE *fi = fopen("BAC.TXT", "r");
	num = 0;
	last = -1;
	while (fscanf(fi, "%f", &c) != EOF) {
		if (last == -1)
			last = c;
		if (last != c) {
			printf("%.0f %d ", last, num);
			num = 0;
			last = c;
		}
		++num;
	}
	if (num)
		printf("%.0f %d\n", last, num);
	fclose(fi);

	return 0;
}

