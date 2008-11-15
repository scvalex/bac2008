#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, v[100], i, s;

	scanf("%d", &n);
	for (i = 0; i < n; ++i)
		scanf("%d", v+i);
	
	s = 0;
	for (i = 0; i < n; ++i)
		s += v[i];
	
	do {
		printf("%d\n", s);
		s -= v[--i];
	} while (i > 0);

	return 0;
}

