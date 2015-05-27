#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 23

/* prints the permutations of string specified by the command-line argument */
int main(int argc, char **argv)
{
	if (argc != 3) {
		fprintf(stderr, "usage: %s n *s\n", argv[0]);
		return -1;
	}
	int n = (int)strlen(argv[2]);
	char s[MAX + n];
	sprintf(s, "./perm %d %d | ./nprint ", n, atoi(argv[1]));
	char *t = strcat(s, argv[2]);
	system(t);
	return 0;
}
