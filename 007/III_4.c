#include <stdio.h>

float sub(float n) {
	int c, s, max;

	max = 0;
	for (s = 1; s <= 5; ++s) {
		if (s > n)
			continue;
		c = s;
		while (2*c <= n)
			c *= 2;
		if (c > max)
			max = c;
	}

	return max;
}

int main(int argc, char *argv[]) {
	float n, s;

	scanf("%f", &n);

	while (n) {
		s = sub(n);
		printf("%.0f\n", s);
		n -= s;
	}

	return 0;
}

