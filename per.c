#include <stdio.h>
typedef unsigned long bignum;

bignum per(bignum, bignum);

int main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage: %s n r\n", argv[0]);
		return -1;
	}
	bignum n = atoi(*++argv);
	bignum r = atoi(*++argv);
	printf("%lu\n", per(n, r));
	return 0;
}
/* per: returns the permutation of n objects taken r at a time */
bignum per(bignum n, bignum r)
{
	if (r == 0)
		return 1;
	return n * per(n - 1, r - 1);
}
