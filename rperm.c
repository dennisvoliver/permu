#include <stdio.h>

typedef unsigned long bignum;
bignum per(bignum, bignum);
int main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage: %s n r\n", argv[0]);
		return -1;
	}
	int n = atoi(*++argv);
	int r = atoi(*++argv);
	printf("%lu\n", per(n, r));
	return 0;
}

/* per: returns the permutation of n items taken r at a time without using factorial */
bignum per(bignum n, bignum r)
{
	if (n < r)
		return 0;
	if (r == 0)
		return 1;
	if (n == r)
		return n * per(n - 1, n - 1);
	return per(n, n) / per(n - r, n - r);
}
