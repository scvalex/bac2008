#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, i, fl = 0;
	scanf("%d", &n);

	for (i = 1; fl + i < n; fl += i, ++i)
		;
	
	printf("%d\n", i-(n-fl)+1);

	return 0;
}

