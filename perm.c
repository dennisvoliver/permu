#include <stdio.h>

int printp(int *place);
int perm(int *place, int m, int *symbol, int n );
int main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage: %s n r\n", argv[0]);
		return -1;
	}

	int n = atoi(*++argv);
	int symbol[n + 1];
	symbol[0] = n;
	int i;
	for (i = 1; i <= n; i++)
		symbol[i] = 0;

	int m = atoi(*++argv);
	int place[m + 1];
	place[0] = m;
	perm(place, m, symbol, n);
	return 0;
}

/* perm: permutates a sequence of integers, *symbol is the marker */
int perm(int *place, int m, int *symbol, int n )
{
	if (m <= 0) {
		printp(place);
		return 0;
	}
	int i;
	for (i = 1; i <= n; i++) {
		if (symbol[i] == 0) {
			symbol[i] = 1;
			place[m] = i;
			perm(place, m - 1, symbol, n);
			symbol[i] = 0;
		}
	}
	return 0;
}

/* printp: prints an integer sequence, the first of which is the cardinal number of the set */
int printp(int *place)
{
	int i;
	for (i = 1; i <= place[0]; i++)
		printf("%d ", place[i]);
	putchar('\n');
	return 0;
}
/*
	if the buffer is full
		print
		return
	for each place in the marker that is not yet marked
		mark it
		pass it to the next recursion
		unmark it again
	return
*/
