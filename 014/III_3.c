#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	int n, i, c, j;
	int cnt[10];
	memset(cnt, 0, sizeof(cnt));
	scanf("%d", &n);
	for (i = 0; i < n; ++i) {
		scanf("%d", &c);
		++cnt[c];
	}

	for (i = 0; i < 10; ++i)
		for (j = 0; j < cnt[i]; ++j)
			printf("%d ", i);
	printf("\n");

	return 0;
}

